// given the head and we have to reverse the doubly linked list
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
 
  void reverseDLL(Node* &head , Node* &tail){
    Node* currPtr = head;
    while (currPtr)
    { 
        Node* nextPtr = currPtr->next;
        currPtr->next = currPtr->prev;
        currPtr->prev = nextPtr;
        currPtr = nextPtr;
    }
    // swapping head and tail pointer
    Node* new_head = tail;
    tail = head;
    head = new_head;

  }
int main(){
    DoublyLinkedList dll;
    dll.InsertAtEnd(1);
     dll.InsertAtEnd(2);
    dll.InsertAtEnd(3);
    dll.InsertAtEnd(4);
    dll.display();

     reverseDLL(dll.head , dll.tail);
   dll.display();

        return 0;
}