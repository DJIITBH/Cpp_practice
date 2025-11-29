bool floydloop(Node* head)
{
    if(head==NULL)
    {
        return false;
    }
    Node* slow = head;
    Node* fast = head;
    while(slow!=NULL && fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            // cout<<(slow->data)<<endl;
            return true;
        }
        
    }
    return false;
}
