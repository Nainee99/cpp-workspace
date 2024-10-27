// we will reverse the linked list
#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = NULL;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = NULL;
    }

    void insert(int val) {
        Node* new_node = new Node(val);
        if (head == NULL) { // Change = to ==
            head = new_node;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void Display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

Node* ReverseLL(Node* &head)
{
    Node*Preptr = NULL;
    Node*Currptr = head;

   // Currptr->next=Preptr;
    // move all the 3 ptr by one step ahead

    while (Currptr!=NULL)
    {
        Node*nextptr= Currptr->next;
         Currptr->next=Preptr;
             // move all the 3 ptr by one step ahead
         Preptr= Currptr;
         Currptr=nextptr;
    }// when this loop end , my prevptr pointing to my last node which is the new head
    Node*new_head=Preptr;
    return new_head;
}
 
Node* ReverseLLRecursion(Node* &head)
{
    // base case
    if (head==NULL || head->next==NULL)
    {
        return head;
    }
    
    //recursive case
    Node* new_head = ReverseLLRecursion(head->next);
     head->next->next = head;
     head->next=NULL;  // head is now pointing to the last node in the reversed linkedlist
     return new_head;
}
int main()
{
    LinkedList l1;
     l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.insert(4);
    l1.insert(5);
    l1.Display();
     l1.head = ReverseLLRecursion (l1.head);
     l1.Display();
    return 0;
}