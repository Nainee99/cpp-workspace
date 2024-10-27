//give the head of linked list and we have to print the list in reverse order 
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
   void reversePrint(Node* head)// we are not passing by reference because we will jst print the linked list
    {
        // base case
        if (head==NULL)
        {
            return;
        }
        // recursive cASE
         reversePrint(head->next);
         cout<< head->val<<" ";        
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
    reversePrint(l1.head);
    return 0;
}