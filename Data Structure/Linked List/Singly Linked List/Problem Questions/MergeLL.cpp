// given 2 sorted linked list , merge them into singly linked such that the resulting list is also sorted 
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
    
    Node* mergelinkedlist(Node* &head1 , Node* head2)
    {
      Node* dummyHeadNode  = new Node(-1); // dummyhead node is the head of merged linked list

      Node* ptr1 = head1;
      Node* ptr2 = head2;
      Node* ptr3 = dummyHeadNode; 

      while (ptr1&&ptr2)
      {
        if (ptr1->val < ptr2->val)
        {
            ptr3->next= ptr1;
            ptr1=ptr1->next;
        }else{
            ptr3->next= ptr2;
            ptr2=ptr2->next;
        }
        ptr3= ptr3->next;
      }

    if (ptr1)
    {
        ptr3->next = ptr1;
    }else{
        ptr3->next = ptr2;
    }
    return dummyHeadNode->next;
      
    }

int main()
{
     LinkedList ll1;

    ll1.insert(1);
    ll1.insert(4);
    ll1.insert(5);
    ll1.Display();
    
    LinkedList ll2;

    ll2.insert(2);
    ll2.insert(3);
    ll2.Display();

    LinkedList ll3;
    ll3.head = mergelinkedlist(ll1.head , ll2.head);
    ll3.Display(); 

    return 0;
}