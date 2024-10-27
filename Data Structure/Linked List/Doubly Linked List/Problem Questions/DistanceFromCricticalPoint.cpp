#include<iostream>
#include<vector>
using namespace std;

class Node{
   public:
    int val ;
    Node* prev;
    Node* next;

    Node(int data){
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList{
   public:
     Node* head;
     Node* tail;
    
    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }
     // to display
     void display(){
        Node* temp = head;
        while (temp!=NULL)
        {
            cout<<temp->val<<"  ";
            temp= temp->next;
        }cout<<endl;
        
     }
      void InsertAtEnd(int val){
        Node* new_node = new Node(val);
        if (tail==NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        return;
    }

};
bool isCriticalPoint(Node* &currNode){
      if (currNode->prev->val < currNode->val && currNode->next->val<currNode->val) // local maxima
        return true;
      if (currNode->prev->val > currNode->val && currNode->next->val>currNode->val) // local maxima
        return true;
      
      return false;
      
}
vector<int> distanceBetweenCriticalPoint( Node* head , Node* tail){
    vector<int> ans(2,INT8_MAX);
    int firstCP = -1 , lastCP = -1;

    Node* currNode = tail->prev;
    if (currNode==NULL)
    {
       ans[0]=ans[1]=-1;
       return ans;
    }

    int CurrPos = 0;
    while (currNode->prev!=NULL)
    {
        if(isCriticalPoint(currNode)){
           if (firstCP == -1)
           {
              firstCP=lastCP = CurrPos;
           }else{
            ans[0] = min(ans[0], CurrPos-lastCP); // min distance
            ans[1] = CurrPos - firstCP; // max distance
            lastCP = CurrPos;
           }
           
        }
        CurrPos++;
         currNode = currNode->prev;
    }
    if (ans[0] == INT8_MAX)
    {
        ans[0] =  ans[1] = -1;
    }
   return ans;   
}
int main(){
    DoublyLinkedList dll;
    dll.InsertAtEnd(1);
    dll.InsertAtEnd(5);
    dll.InsertAtEnd(2);
    dll.InsertAtEnd(6);
    dll.InsertAtEnd(3);
    dll.display();
     vector<int> ans = distanceBetweenCriticalPoint(dll.head , dll.tail);
     cout<<ans[0] <<" "<<ans[1]<<endl;
    return 0;
}