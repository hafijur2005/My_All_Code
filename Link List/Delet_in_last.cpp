#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void delet_in_last(Node* &head)
{
    Node *temp = head;
   while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    
    if(temp->next==NULL)
        {
            temp = NULL;
        }    
}
void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
    cout<<temp->value<<endl;
    temp=temp->next;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    head->next = a;
    a->next = b;

    delet_in_last(head);
    print(head);
    return 0;
}