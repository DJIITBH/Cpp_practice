/*
class Node {
  public:
    int data;
    Node* next;
    Node* random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {

  private:
    void insertAtTail(Node* &head, Node* &tail, int data)
    {
        Node* temp = new Node(data);
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
    }
  public:
    Node* cloneLinkedList(Node* head) {
        // code here
        Node* cloneHead=NULL;
        Node* cloneTail=NULL;
        Node* temp=head;
        while(temp!=NULL)
        {
            int data = temp->data;
            insertAtTail(cloneHead, cloneTail, data);
            temp=temp->next;
        }
        // random ptrs store krna hai
        Node* originalNode=head;
        Node* cloneNode = cloneHead;
        while(originalNode!=NULL)
        {
            Node* next = originalNode->next;
            originalNode->next=cloneNode;
            originalNode = next;
            
            next = cloneNode->next;
            cloneNode->next = originalNode;
            cloneNode = next;
        }
        temp = head;
        while(temp!=NULL)
        {
            if (temp->random != NULL)
                temp->next->random = temp->random->next;
            else
                temp->next->random = NULL;
            temp=temp->next->next;
        }
        // revert changes
        originalNode = head;
        cloneNode = cloneHead;
        while(originalNode!=NULL)
        {
            originalNode->next = cloneNode->next;
            originalNode = originalNode->next;
            if(originalNode!=NULL)
            {
                cloneNode->next = originalNode->next;

            }
            cloneNode = cloneNode->next;
        }
        return cloneHead;
         
        
    }
};
