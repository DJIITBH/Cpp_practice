class Solution {
  private:
    Node* reverse(Node* head)
    {
       Node* prev = NULL;
       Node* curr = head;
       Node* next = NULL;
       while(curr!=NULL)
       {    
           next = curr->next;
           curr->next = prev;
           prev = curr;
           curr = next;
       }
       return prev;
    }

    void insertatTail(Node* &head, Node* &tail, int data)
    {
        Node* temp = new Node(data);
        if(head == NULL)
        {
            head = temp;
            tail = temp;
            return;
        }
        tail->next = temp;
        tail = temp;
    }

  public:
    Node* addTwoLists(Node* head1, Node* head2) {
        head1 = reverse(head1);
        head2 = reverse(head2);

        Node* anshead = NULL;
        Node* anstail = NULL;

        int carry = 0;

        while(head1 != NULL || head2 != NULL || carry != 0)
        {
            int val1 = (head1 ? head1->data : 0);
            int val2 = (head2 ? head2->data : 0);

            int sum = val1 + val2 + carry;
            carry = sum / 10;
            sum = sum % 10;

            insertatTail(anshead, anstail, sum);

            if(head1) head1 = head1->next;
            if(head2) head2 = head2->next;
        }

        anshead = reverse(anshead);
        
        while(anshead != NULL && anshead->data == 0)
            anshead = anshead->next;
        
        if(anshead == NULL)
            return new Node(0);
        return anshead;
        }
};
