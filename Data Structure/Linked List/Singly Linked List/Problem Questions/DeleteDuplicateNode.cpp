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

void DeleteDuplicateNode(Node* &head) {
    Node* curr_node = head;
    while (curr_node != NULL) {
        while (curr_node->next != NULL && curr_node->val == curr_node->next->val) {
            // delete curr->next
            Node* temp = curr_node->next; // node to be deleted
            curr_node->next = curr_node->next->next;
            delete temp;
        } // this loop ends when curr node and next node values are different
        // or linked list ends
        curr_node = curr_node->next;
    }
}

int main() {
    LinkedList l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(2);
    l1.insert(3);
    l1.insert(3);
    l1.insert(3);
    l1.insert(4);
    l1.Display();
    DeleteDuplicateNode(l1.head);
    l1.Display();
    return 0;
}
