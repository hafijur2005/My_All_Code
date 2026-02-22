#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int value;
    Node* next;
    Node(int value)
    {
        this->value=value;
        this->next=NULL;
    }
};

void insert_in_middle(Node* &head,int value)
{
    Node* temp=head;
    while(temp->value!=20)
    {
        temp=temp->next;
    }
    Node* newnode= new Node(value);
    newnode->next=temp->next;
    temp->next=newnode;
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
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    head->next=a;
    a->next=b;

    insert_in_middle(head,50);
    print(head);
 
    return 0;
}