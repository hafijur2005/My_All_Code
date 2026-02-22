#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false),cin.tie(nullptr)
#define all(x) x.begin(),x.end()
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define nl cout<<"\n";
struct Node
{
    int data;
    Node* next;
};

void insert_in_Head(Node* &Head,int val)
{
    Node* newNode=(Node*) malloc(sizeof(Node));
    newNode->data=val;
    newNode->next=Head;
    Head=newNode;
}
void insert_in_midel(Node* &Head,int t,int val)
{
    Node* newNode=(Node*) malloc(sizeof(Node));
    newNode->data=val;
    if(Head==NULL)
    {
        Head=newNode;
        return;
    }
    Node* temp;
    temp=Head;
    while(temp->data!=t)
    {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
void print(Node* Head)
{
    while(Head->next!=NULL)
    {
        cout<<Head->data<<" ";
        Head=Head->next;
    }
    
}
int main()
{
    fast;
    Node* Head=(Node*) malloc(sizeof(Node));
    Head->next=NULL;
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        insert_in_Head(Head,x);
    }
    insert_in_midel(Head,3,6);
    print(Head);
    return 0;
}