#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

};

void insert_at_head(Node* &head, int d)
    {
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
    }

void insert_at_tail(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insert_at_position(Node* tail, Node* head, int position , int d)
{
    if(position==1)
    {
        insert_at_head(head,d);
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1)
    {
        temp = temp->next;
        cnt++;
    }
    // insert at last
    if(temp->next==NULL)
    {
        insert_at_tail(tail, d);
        return;
    }
    Node* insert_node = new Node(d);
    insert_node->next = temp->next;
    temp->next = insert_node;

}

void deleteNode(int position, Node* &head, Node* tail)
{
    // deleting first node
    if(position==1)
    {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        if(curr->next == NULL)
            tail = prev;  
        curr->next = NULL;
        delete curr;
    }
}

void print(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* node1 = new Node(10);
    // cout << node1-> data << endl;
    // cout << node1->next << endl;

    Node* head = node1;
    Node* tail = node1;
    
    // insert_at_head(head, 12);
    // insert_at_head(head, 15);
    insert_at_tail(tail,12);
    insert_at_tail(tail, 15);
    insert_at_tail(tail, 21);
    insert_at_position(tail, head, 5, 20);
    deleteNode(5, head, tail);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
}