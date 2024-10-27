// given the head of the linked list if the linked list is a palindrome or not
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

 bool Ispalindrome(Node* head){
  // 1. find middle element
    Node* slow = head;
    Node* fast= head;

    while (fast && fast->next)
    {
        slow= slow->next;
        fast=fast->next->next;
    }
    // now slow is pointing to the middle element
    // 2. break the linked list into 2 
    Node* curr = slow->next;
    slow->next = NULL;
    Node* prev = slow;

    //3. reverse the second half of linked list
    while (curr)
    {
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    // 4. chech if the 2 llinked list are equal
    Node* head1 = head;
    Node* head2 = prev;

    while (head2)
    {
        if (head1->val!=head2->val)
        {
            return false;
        }
        head1=head1->next;
        head2= head2->next;
    }
    return true;
 }
int main()
{
    LinkedList ll1;
    ll1.insert(1);
    ll1.insert(2);
    ll1.insert(3);
    ll1.insert(3);
    ll1.insert(2);
    ll1.insert(1);
    ll1.Display();
    cout<<Ispalindrome(ll1.head)<<endl;
    return 0;
}