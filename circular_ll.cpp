#include <iostream>
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

void insert_node(Node* &tail, int element, int d)
{
    if(tail==NULL)
    {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node* curr = tail;  
        while(curr->data!=element)
        {
            curr = curr->next;
        }
        // element is found..
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* tail)
{
    Node* temp = tail;
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }
    while (tail!=temp);
    cout<<endl;
    
}

int main()
{
    Node* tail = NULL;
    insert_node(tail, 5 ,3);
    insert_node(tail, 3 ,5);
    print(tail);
}