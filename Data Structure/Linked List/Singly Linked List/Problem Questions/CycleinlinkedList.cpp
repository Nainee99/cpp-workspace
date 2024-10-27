//given the head of the linked list we have to find wheher it is cyclic or not
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
 
 bool detectCycle(Node* head)
 {
     if (!head)
     {
        return false;
     }
     
    Node* slow= head;
    Node* fast = head;

    while (fast && fast->next)
    {
        slow= slow->next;
        fast= fast->next->next;

        if (slow==fast)
        {
            cout<<slow->val<<endl;
            return true;
        }
    }
    return false;
 }

 void RemoveCycle(Node* &head){ // ssuming that the linked list has a cycle
     Node* slow= head;
     Node*fast = head;

    do
    {
        slow=slow->next;
        fast=fast->next->next;
    } while (slow!=fast);
    
    fast = head;
    while (slow->next != fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next= NULL;
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
    ll1.insert(7);
    ll1.insert(8);
    ll1.Display();
    ll1.head->next->next->next->next->next->next->next->next = ll1.head->next->next;
    cout<<detectCycle(ll1.head)<<endl;
    RemoveCycle(ll1.head);
    cout<<"After removing the cycle"<<endl;
    cout<<detectCycle(ll1.head)<<endl;
    ll1.Display();
    return 0;
}