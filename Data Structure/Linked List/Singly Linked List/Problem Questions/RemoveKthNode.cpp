// given the head of liked list remove the kth-node from the end of the list and return its head
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
 // assuming the k is  always less than/ equal the length of linked list
 void RemoveKthNodeFromEnd(Node* &head , int k){
    Node* ptr1= head;
    Node* ptr2 = head;

     // move ptr2 by k steps ahead
    int count = k;
    while (count--)
    {
        ptr2 = ptr2->next;
    }

    if (ptr2==NULL) // k is equal to lenth of linked list
    {
     // so we have todelete the head of linked list   
     Node* temp = head;
     head = head->next;
     delete temp;
     return;
    }
    
      // now ptr2 is k step ahead of ptr1
     
     // when ptr2 is at NULL (end of the list ) , ptr1 will be at the node to be deleted
     while (ptr2->next!=NULL)
     {
        ptr1=ptr1->next;
        ptr2=ptr2->next;
     }
     // now ptr1 is pointing to the node before kth node from the end
     // node to be deleted is ptr1-> next
     Node* temp= ptr1->next;
     ptr1->next= ptr1->next->next;
     delete temp;
 }
int main()
{
    LinkedList ll1;
     ll1.insert(1);
     ll1.insert(2);
     ll1.insert(3);
     ll1.insert(4);
     ll1.insert(5);
     ll1.insert(6);

     ll1.Display();
     RemoveKthNodeFromEnd(ll1.head , 3);
     ll1.Display();
    return 0;
}