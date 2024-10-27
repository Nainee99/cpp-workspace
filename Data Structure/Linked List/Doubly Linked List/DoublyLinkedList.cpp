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
     
     // insertion at start
    void InsertAtStart( int val){
       Node* new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        new_node ->next =head;
        head->prev =new_node;
        head= new_node;
        return;
    }

    // insertion at the tail
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

    // insertion at the kth position
    void InsertAtKPosition(int val , int k){
        // asumming that the k is less or equal to the lenth of doubly linked list
        Node* temp = head;
        int count = 1;
        while (count<(k-1))
        {
            temp = temp->next;
            count++;
        }
        // temp is now pointing  to the node at the (k-1)th position
           Node* new_node = new Node(val);
           new_node->next = temp->next;
           temp->next = new_node;

           new_node->prev= temp;
           new_node->next->prev = new_node;
           return;
    }

    // delete at the start
    void DeleteAtStart(){
        if (head==NULL)
        {
            return;
        }
        Node* temp =  head;
        head = head->next;

        if (head==NULL) // if doubly inked list had only 1 node
        {
            tail = NULL;
        } else{
            head->prev = NULL;
        }
        delete(temp);
       return ;
    }

    // delete at the end
    void DeleteAtEnd(){
        if (tail == NULL)
        {
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        if (tail==NULL)
        {
           head  == NULL;
        }else{
            tail->next = NULL;
        }
        delete(temp);
        return;
    }

    // deletio at kth position
     void DeleteAtKPosition(int k){
       // asuming that the k is less than or equal to dll
      Node* temp = head;
      int count = 1;
      while (count<k)
      {
        temp = temp->next;
        count++;
      }
      // now temp is pointin to the node to ne deleted
      temp->prev->next = temp->next;
      temp->next->prev = temp ->prev;
      delete(temp);
      return;
     }
};



int main(){
    DoublyLinkedList dll;
    //   dll.InsertAtStart(1);
    //     dll.display();
    //   dll.InsertAtStart(2);
    //     dll.display();
    //   dll.InsertAtStart(3);
    //     dll.display();
    dll.InsertAtEnd(1);
         dll.display();
    dll.InsertAtEnd(2);
         dll.display();
    dll.InsertAtEnd(3);
         dll.display();

    dll.InsertAtKPosition(4 , 3);
        dll.display();
    // dll.DeleteAtStart();
    //   dll.display();
    // dll.DeleteAtEnd();
    //   dll.display();
    dll.DeleteAtKPosition(3 );
       dll.display();
    
    return 0;
}