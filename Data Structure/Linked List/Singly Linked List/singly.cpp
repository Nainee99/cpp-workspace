#include<iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    // Constructor
    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

    // Insert at the head
    void insertAtHead(Node* &head, int val)
    {
        Node* new_node = new Node(val);
        new_node->next = head;
        head = new_node;
    }
    
  // Insertion at the tail
    void insertAtTail(Node* head, int val){
        Node* new_node = new Node(val);
        Node*temp = head;

        while(temp->next !=NULL)
        {
            temp = temp->next;
        }
        // tem has reached the last node
        temp->next = new_node;
    }

    // insertion at the arbitrary popsition
    void insertAtArbitrary(Node* head , int val , int pos){
        if(pos==0){
            insertAtHead(head,val);
            return;
        }

        Node* new_node = new Node(val);
        Node* temp = head;
        int current_pos = 0;
        while(current_pos!=pos-1){
            temp= temp->next;
            current_pos++;
        }
       // temp is pointig to node at pos-1
       new_node->next = temp ->next;
       temp->next= new_node; 
    }

   // Update at the position
    void UpdateAtPosition(Node* &head , int k , int val)
    {
       Node* temp = head;
       int curr_pos = 0;
       while( curr_pos != k)
       {
        temp = temp->next;
        curr_pos++;
       }
       // temp will be pointing to kth node
       temp->val = val;

    }

    // Display function
    void display(Node* head)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

   // Delete at the head
   void DeleteAtHead(Node* &head)
   {
      Node* temp = head; // node to be deleted
      head = head->next;
      free(temp);
   }

   // Delete at the tail
   void DeleteAtTail( Node* &head)
   {
    Node* second_last = head;
    while (second_last->next->next != NULL)
    {
         second_last = second_last->next;
    }
    // mow second_last will point to the second second last node
    Node* temp = second_last->next;
    second_last->next = NULL;
    free(temp);
   }

 // Delete at arbitrary position
  void DeleteAtposition(Node* &head , int pos)
  {
    if(pos==0)
    {
        DeleteAtHead(head);
        return;
    }
    int curr_pos = 0;
    Node*prev = head;
    while (curr_pos != pos-1)
    {
      prev = prev->next;
      curr_pos++;
    }
    // prev is pointing to node at pos-1
    Node* temp = prev->next;
    prev-> next=prev->next->next;
    free(temp);
  }



int main()
{
    Node* head = NULL;
    insertAtHead(head, 2);
    display(head);
    insertAtHead(head, 1);
    display(head);
    insertAtTail(head , 3);
    display(head);
    insertAtArbitrary(head, 4 , 1);
    display(head);
    UpdateAtPosition(head , 2 , 5);
    display(head);

    // DeleteAtHead(head);
    //   display(head); 
    // DeleteAtTail(head);
    // display(head);
    DeleteAtposition(head,1);
     display(head);
    return 0;
} 