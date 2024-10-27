// we have to fing the middle element of the linked list
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

   Node* FindiddleNode(Node* &head ){
   
    Node* slow = head;
    Node* fast = head;

    while ( fast!= NULL && fast->next != NULL)
    {
        slow=slow->next;
        fast= fast->next->next;
    }
    return slow;
   }
int main()
{
     LinkedList ll1;

    ll1.insert(1);
    ll1.insert(2);
    ll1.insert(3);
    ll1.insert(4);
    ll1.insert(5);
    ll1.Display();

    Node* middleNode = FindiddleNode(ll1.head);
    cout<<middleNode->val<<endl;

    return 0;
}