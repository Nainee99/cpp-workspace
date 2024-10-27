//  given the head of a singly linkedlist, group all the nodes with 
// odd indices together followed by the node with the even indices and return the
// reordered list.
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
Node* oddEevnLinkedList(Node* &head){
    if (!head)
    {
        return head;
    }
    
    Node* evenhead = head->next;
    Node* oddptr = head;
    Node* evenPtr = evenhead;
 
 while (evenPtr && evenPtr->next)
 {
    oddptr->next = oddptr->next->next;
    evenhead->next= evenPtr->next->next;
    oddptr = oddptr->next;
    evenPtr= evenPtr->next;
 }
  oddptr->next = evenhead;
}
int main()
{
    LinkedList ll1;
    ll1.insert(1);
    ll1.insert(2);
    ll1.insert(3);
    ll1.insert(4);
    ll1.insert(5);
    ll1.insert(6 );
    ll1.Display();
    ll1.head = oddEevnLinkedList(ll1.head);
    ll1.Display();

    return 0;
}