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
        if (head == NULL) {
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

int getlength(Node* head) {
    Node* temp = head;
    int length = 0;

    while (temp != NULL) {
        length++;
        temp = temp->next;
    }
    return length;
}

Node* moveheadbyK(Node* head, int k) {
    Node* ptr = head;
    while (k--) {
        ptr = ptr->next;
    }
    return ptr;
}

Node* getIntersection(Node* head1, Node* head2) {
    // Calculate the length of both linked lists
    int l1 = getlength(head1);
    int l2 = getlength(head2);
    Node* ptr1;
    Node* ptr2;

    // Find the difference K between linked lists and adjust the pointers
    if (l1 > l2) {
        int k = l1 - l2;
        ptr1 = moveheadbyK(head1, k);
        ptr2 = head2;
    } else {
        int k = l2 - l1;
        ptr1 = head1;
        ptr2 = moveheadbyK(head2, k);
    }

    // Compare the nodes to find the intersection
    while (ptr1 && ptr2) {
        if (ptr1 != ptr2) { // Check if the nodes are not equal
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        } else {
            return ptr1;
        }
    }

    return NULL; // No intersection found
}

int main() {
    LinkedList ll1;

    ll1.insert(1);
    ll1.insert(2);
    ll1.insert(3);
    ll1.insert(4);
    ll1.insert(5);
    ll1.Display();

    LinkedList ll2;

    ll2.insert(6);
    ll2.insert(7);
    ll2.Display();

    ll2.head->next->next = ll1.head->next->next->next; // Create an intersection

    Node* Intersection = getIntersection(ll1.head, ll2.head);
    if (Intersection) {
        cout << "Intersection Node Value: " << Intersection->val << endl;
    } else {
        cout << "No Intersection Found" << endl;
    }

    return 0;
}
