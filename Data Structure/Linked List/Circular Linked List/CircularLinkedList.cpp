#include<iostream>
using namespace std;

class Node{
    public:
     int val;
     Node* next;

     Node(int data){
        val = data;
        next = NULL;
     }
};

class CircularLinkedList{
      public:
       Node* head;

       CircularLinkedList(){
        head = NULL;
       }
       // display 
       void  Display(){
        Node* temp = head;
        do
        {
           cout<<temp->val<<"->";
           temp=temp->next;
        } while (temp!=head);
        cout<<endl;
       }

       // insert at strat
       void InsertAtStart(int val){
        Node* new_node = new Node(val);
        if (head==NULL)
        {
           head = new_node;
           new_node->next = head;  // circular linked list
           return;
        }
        Node* tail = head;
        while (tail->next!= head)
        {
            tail = tail ->next;
        }
        // now tail is pointing to the last node of the linked list
        tail->next = new_node;
        new_node->next = head;
        head = new_node;
       }

       // insert at the end
       void InsertAtEnd ( int val){
        Node* new_node = new Node(val);

        if (head==NULL)
        {
             head = new_node;
           new_node->next = head;  // circular linked list
           return;
        }
        Node* tail = head;
        while (tail->next!=head)
        {
            tail= tail->next;
        }
        //here tail will be pointing to last node
        tail->next = new_node;
        new_node->next = head;  
       }


        // insert at  the kth node is same code as we did in the singly linked list
        // updation is also the same

        // delete at the start
        void DeleteAtStart(){

            if (head==NULL)
            {
                return;
            }
            
            Node* temp = head;
            Node* tail = head;
            while (tail->next!=head)
            {
                tail=tail->next;
            }
            head = head->next;
            tail->next = head;
            delete(temp);
            
            
        }

        // deletiom at the end
        void DeleteAtEnd(){
            if (head==NULL)
            {
                return;
            }
            Node*tail = head;
           

            while (tail->next->next!=head)
            {
              tail=tail->next;
            }
            // here tail is pointing tto the second last node so we have to deleted the last node which tail->next.
           Node*temp = tail->next;
           tail->next = head;
           delete(temp);
        }

        // deletion at kth node is same as singly linked list.


       // print circular
       void printCircularLl(){
        Node* temp = head;
        for (int i = 0; i < 15; i++)
        {
         cout<<temp->val<< "->";
         temp=temp->next;
        }cout<<endl;
        
       }
};

int main(){
    CircularLinkedList CLL;
    CLL.InsertAtStart(1);
    CLL.InsertAtStart(2);
    CLL.InsertAtStart(3);
    CLL.Display();
    CLL.InsertAtEnd(4);
    CLL.Display();

    CLL.DeleteAtStart();
    CLL.Display();

    CLL.DeleteAtEnd();
    CLL.Display();
    return 0;
}