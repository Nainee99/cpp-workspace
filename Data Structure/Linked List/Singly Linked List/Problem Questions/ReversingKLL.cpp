// given the head of linked list ,reverse the nodes of the list k at a time and return the modified list
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
 
 Node* ReverseKLL(Node* &head , int k)
 {
    Node* prevptr=NULL;
    Node*curptr=head;
    int counter = 0; // for counting first k nodes

    while (curptr!=NULL && counter<k) // reversing first k nodes
    {
        Node*nextptr=curptr->next;
        curptr->next=prevptr;
        prevptr=curptr;
          curptr= nextptr;
          counter++;
    }
    // curptr will give us (k+1)th node
    if (curptr!=NULL)
    {
    Node* new_head = ReverseKLL(curptr,k);  // recurcise call
    head->next=new_head;
    }
   return prevptr; // preptr will give the new_head of the connected linkedlist
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
    l1.head = ReverseKLL(l1.head ,3);
    l1.Display();
    return 0;
}