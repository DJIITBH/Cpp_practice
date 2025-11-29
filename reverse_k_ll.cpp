/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node* kReverse(Node* head, int k) {
    // Write your code here.
    // base case
    if(head==NULL)
    {
        return NULL;
    }
    // reverse first k nodes
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;

    int cnt=0;
    Node* temp = head;
    while(temp != NULL && cnt < k) {
        temp = temp->next;
        cnt++;
    }

    if(cnt < k) return head;
    cnt=0;
    while(curr!=NULL && cnt<k)
    {
        next=curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        cnt++;
    }
    if(next!=NULL)
    {
        head->next = kReverse(next, k);
    }
    return prev;
}
