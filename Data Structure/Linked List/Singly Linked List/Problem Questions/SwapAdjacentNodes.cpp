// given the head of the linked list , swap every two adjacent node and retun its head
//Only  nodes modifiy themselves  maybe changed
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
 
 Node* SwapAdjacent(Node* &head){
    //base case
    if (head==NULL || head->next = NULL )
    {
        return head;
    }
    
    //recursive case
    Node* SecongNode = head->next;
    head->next = SwapAdjacent(SecongNode->next);
    SecongNode->next  = head; // reversing the link between first and second node
    return SecongNode;
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
    ll1.head = SwapAdjacent(ll1.head);
    ll1.Display();

    return 0;
}