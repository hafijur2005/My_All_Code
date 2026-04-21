#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "nO\n";
#define nl cout << "\n";
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
Node *head;
Node *tail;
void inser_in_head(int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
}
void insert_in_middle(int val, int ind)
{
    Node *newnode = new Node(val);
    Node *temp = head;
    int count = 1;
    while (count != ind && temp)
    {
        temp = temp->next;
        count++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void insert_in_tail(int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
    }
}
void print()
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return;
}
int main()
{
    fast;
    while (1)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int n;
            cin >> n;
            inser_in_head(n);
        }
        else if (op == 3)
        {
            int n;
            cin >> n;
            insert_in_tail(n);
        }
        else if (op == 2)
        {
            int n, ind;
            cin >> n >> ind;
            insert_in_middle(n, ind);
        }
        else if (op == 0)
        {
            print();
            return 0;
        }
    }
    return 0;
}
