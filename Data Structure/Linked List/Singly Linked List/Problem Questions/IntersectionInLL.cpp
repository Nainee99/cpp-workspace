// Given the head of two linked list  headA an headB return the node at which the two list intersect if the two linked list have no intersection at all, return NULL
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
 int getlength(Node* head){
    Node* temp = head;
     int length = 0;

     while (temp!=NULL)
     {
        length++;
        temp= temp->next;

     }
     return length;

 }

Node* moveheadbyK(Node* head , int k){
     Node* ptr = head;
     while (k--)
     {
        ptr = ptr->next;
     }
     return ptr;
}

Node* getIntersection(Node* head1 , Node* head2){
  
    // step 1: to calculate the length of bth linked list 
     
     int l1 = getlength(head1);
     int l2 = getlength(head2);

    // step 2 : find the difference  K between linked list and move the longer linked list ptr by k step
     Node* ptr1;
     Node* ptr2;
     if (l1>l2) // l1 is longer
     {
        int k = l1 -  l2;
       ptr1 =  moveheadbyK(head1,k);
       ptr2 = head2;
     }else{ // l2 is longer
            int k = l2 - l1;
            ptr1= head1;
            ptr2 = moveheadbyK(head2 , k); 
     }

     // step 3: compare ptr1 and ptr2 nodes

     while (ptr1)
     {
        if (ptr1== ptr2)
        {
            return ptr1;   
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
        
     }
     
     return NULL;
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
    
    LinkedList ll2;

    ll2.insert(6);
    ll2.insert(7);
    ll2.Display();

         ll2.head->next->next = ll1.head->next->next->next;

    Node* Intersection = getIntersection(ll1.head , ll2.head);
    if (Intersection)
    {
        cout << Intersection->val<<endl;
    }else{
        cout<<"-1"<<endl;

    }
    
    return 0;
}