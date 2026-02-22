#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";
struct Node
{
    int data;
    Node *next;
};
void insert_in_head(Node *&head, int val)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = val;
    if (head == NULL)
    {
        head = newNode;
        head->next = NULL;
    }
    else
    {
        newNode->next = head;
        head = newNode;
        newNode->next=NULL;
    }
    
    // 1 2 3 5 6
}
void insert_in_middle(Node *head, int pos, int val)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = val;
    Node *temp;
    temp = head;
    while (temp->data != pos)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    // 1 2 4 5 6 8 7
}
void insert_in_tail(Node *head, int val)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = val;
    if (head == NULL)
        head = newNode;
    else
    {
        Node *temp;
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    newNode->next = NULL;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    fast;
    Node *head;
    insert_in_head(head, 5);
    insert_in_head(head, 10);
    insert_in_middle(head, 10, 7);
    insert_in_middle(head, 7, 6);
    insert_in_tail(head, 1);
    insert_in_tail(head, -2);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_in_tail(head, x);
    }
    print(head);
    return 0;
}