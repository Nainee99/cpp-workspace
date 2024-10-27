#include <iostream>
#include<vector>
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
      Node* dummyHeadNode  = new Node(-1);

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

 Node* mergeKLinkedList(vector<Node*> &lists){
      
      if (lists.size()==0)
      {
        return NULL;
      }
      
      while (lists.size()>1)
      {
        Node* mergedHead = mergelinkedlist(lists[0], lists[1]);
        lists.push_back(mergedHead);
        lists.erase(lists.begin()); 
        lists.erase(lists.begin());
      }     
      return lists[0];
 }
   // vector -> head1 head2 head3 head 4
   //1. head1 and head2 ll will be merged
   //vector ->  head3 head4 mergedhead 1_2
   //2. head3 and head4 will be  merged
   //vector -> mergedhead1_2 mergedhead  3_4
   // 3.  mergedhead1_2 and  mergedhead3_4 will be merged
   // vector-> mergedhead1_2 merged3_4 mergedhead1_2_3_4. then wewill rermove the merged head1_2 and 3_4


int main()
{
     LinkedList ll1;

    ll1.insert(1);
    ll1.insert(7);
    ll1.insert(8);
    ll1.Display();
    
    LinkedList ll2;

    ll2.insert(2);
    ll2.insert(4);
     ll2.insert(5);
    ll2.Display();

    LinkedList ll3;
     ll3.insert(3);
     ll3.insert(6);
     ll3.Display();

    vector<Node*> lists;
    lists.push_back(ll1.head);
    lists.push_back(ll2.head);
    lists.push_back(ll3.head);

    LinkedList MergedLL ;
    MergedLL.head = mergeKLinkedList(lists);
    MergedLL.Display();
    return 0;
}