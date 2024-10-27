// given the head of linked list , rotate the linked list to the right by k places
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
Node* rotateByK(Node* &head , int k){
    //1. find lenth of liked list
    int n = 0;
    //2. find tail node
    Node* tail = head;

    while (tail->next!=NULL)
    {
        n++;
        tail=tail->next;
    }
    n++; // for including last node

    k = k%n;
    if (k==0)
    {
        return head;
    }
    tail->next = head;
    // 3. traverse n - k node
    Node* temp = head;
    for (int i = 1; i < n-k; i++)
    {
        temp=temp->next;
    }
    // temp is now pointing to (n-k)th node
    Node* newHead = temp->next;
    temp->next=NULL;
    return newHead;
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
    ll1.head = rotateByK(ll1.head , 3);
    ll1.Display();

    return 0;
}