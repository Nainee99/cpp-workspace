
    Node(int data){
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList{
   public:
     Node* head;
     Node* tail;
    
    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }
     // to display
     void display(){
        Node* temp = head;
        while (temp!=NULL)
        {
            cout<<temp->val<<"  ";
            temp= temp->next;
        }cout<<endl;
        
     }
      void InsertAtEnd(int val){
        Node* new_node = new Node(val);
        if (tail==NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        return;
    }

};
 void deletSameNeighbourNode(Node* &head , Node* &tail ){
    Node* currPtr = tail->prev;
    while (currPtr!=head)
    {
        Node* preNode = currPtr->prev;
        Node* nextNode= currPtr ->next;
        if (preNode->val == nextNode->val)
        {
            // i need to delete the curr node
            preNode->next = nextNode;
            nextNode->prev = preNode;
            delete(currPtr);
        }
        currPtr = preNode;  
    }
 }
int 