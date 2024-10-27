// given the head of the DLL and we have to check if it is palindrome or not
#include<iostream>
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
 bool Ispalindrome(Node* head , Node* tail){
    while (head!= tail && tail!=head->prev)
    {
        if (head->val != tail->val)
        {
            return false;
        }
        head= head->next;
        tail= tail->prev;
    }
    return true;
 } 
int main(){
    DoublyLinkedList dll;
    dll.InsertAtEnd(1);
    dll.InsertAtEnd(2);
    dll.InsertAtEnd(3);
    dll.InsertAtEnd(2);
    dll.InsertAtEnd(1);
    dll.display();

    cout<<Ispalindrome(dll.head , dll.tail)<<endl;
    return 0;
}