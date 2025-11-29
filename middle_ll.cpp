/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/
int getlength(Node *head)
{
    int cnt=0;
    while(head!=NULL)
    {
        head=head->next;
        cnt++;
    }
    return cnt;
}

Node *findMiddle(Node *head) {
    // Write your code here
    int len = getlength(head);
    int mid = (len/2);
    int cnt=0;
    while(cnt<mid)
    {
        head=head->next;
        cnt++;
    } 
    return head;
}

