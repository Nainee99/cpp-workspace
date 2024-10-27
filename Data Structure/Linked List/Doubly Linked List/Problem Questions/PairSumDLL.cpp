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

vector<int> pairSum(Node* head, Node* tail , int x){
   vector<int> ans(2,-1);
    while (head!= tail)
    {
        int sum = head->val + tail->val;
        if (sum==x)
        {
            ans[0] = head->val;
            ans[1] = tail->val;
            return ans;
        }

        if (sum>x) // i need smaller value , i will move my tail back       {
            tail=tail->prev;
        } 
        // i need bigger value , i will move the head forward
         else{ 
           head = head->next;
        }
        return ans;
    }
    

int main(){
    DoublyLinkedList dll;
    dll.InsertAtEnd(2);
    dll.InsertAtEnd(5);
    dll.InsertAtEnd(6);
    dll.InsertAtEnd(8);
    dll.InsertAtEnd(9);
    dll.InsertAtEnd(10);
    dll.display();

    vector<int> ans = pairSum(dll.head , dll.tail ,11 );
    cout<< ans[0] <<" "<< ans[1] << endl; 
     return 0;
}