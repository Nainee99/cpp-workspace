// Given two linked list ,Tell if they are equal or not(two linked list are equal if they have the same data and also the arrangement of data is also the same)
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

bool CheckEqualLinkedList(Node* head1 , Node* head2)
{
     Node* Ptr1=head1;
     Node* Ptr2= head2;

     while (Ptr1!=NULL && Ptr2!=NULL)
     {
        if (Ptr1->val!=Ptr2->val)
        {
            return false;
        }
        Ptr1= Ptr1->next;
        Ptr2= Ptr2->next;
        
     }// at this point either ptr1 is NULL or PTr2 is NUll or both are null
     return (Ptr1==NULL && Ptr2 == NULL);
     
}
 int main()
 {
    LinkedList l1;
    l1.insert(1);
    l1.insert(2);
     l1.insert(3);
     l1.insert(4);
    
    LinkedList l2;
    l2.insert(1);
    l2.insert(2);
    l2.insert(3);
     
     l1.Display();
     l2.Display();

     cout<<CheckEqualLinkedList(l1.head,l2.head)<<endl;
    return 0;
 }