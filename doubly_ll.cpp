#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(Node* head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int length(Node* head)
{
    Node* temp = head;
    int length = 0;
    while(temp!=NULL)
    {
        temp = temp->next;
        length++;
    }
    return length;
}

void insert_at_head(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insert_at_tail(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insert_at_position(Node* &tail, Node* &head, int position, int d)
{
    if(position==1)
    {
        insert_at_head(head, d);
        return;
    }
    else 
    {
        Node* temp = head;
        int cnt=1;
        while(cnt < position-1)
        {
            temp = temp->next;
            cnt++;
        }
        if(temp->next==NULL)
        {
            insert_at_tail(tail,d);
            return;
        }
        Node* new_node = new Node(d);
        new_node->next = temp->next;
        temp->next->prev = new_node;
        new_node->prev = temp;
        temp->next = new_node;
        
    }
}

void delete_node(Node* &tail, Node* &head, int position)
{
    Node* curr = head;
    Node* prev = NULL;
    int cnt=1;
    if(position==1)
    {
        head = curr->next;
        curr->next = NULL;
        delete curr;
        return;
    }
    while(cnt < position)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    if(curr->next == NULL)
    {
        tail = curr->prev;
        curr->prev = NULL;
        prev->next = NULL;
        delete curr;
        return;
    }
    prev->next = curr->next;
    curr->next->prev = prev;
    curr->next = NULL;
    curr->prev = NULL;
    delete curr;
}

int main()
{
    Node* head = new Node(10);
    Node* tail = head;
    insert_at_head(head, 20);
    insert_at_head(head, 30);
    insert_at_tail(tail, 40);
    insert_at_position(tail, head, 4, 45);
    delete_node(tail, head, 1);
    print(head);
    int len = length(head);
    cout<<"len "<<len<<endl;

}