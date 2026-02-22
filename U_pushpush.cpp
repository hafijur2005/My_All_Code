#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *pre;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->pre = NULL;
    }
};
void insert_in_head(Node *&head, Node *&tail, int value)
{
    Node *newnode = new Node(value);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->pre = newnode;
    head = newnode;
}

void insert_in_tail(Node *&head, Node *&tail, int value)
{
    Node *newnode = new Node(value);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->pre = tail;
    tail->next = newnode;
    tail = newnode;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;

    Node *tail = NULL;
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (i % 2 == 0)
                insert_in_tail(head, tail, a);
            else
                insert_in_head(head, tail, a);
        }
    }
    else
    {

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (i % 2 == 1)
                insert_in_tail(head, tail, a);
            else
                insert_in_head(head, tail, a);
        }
    }
    print(head);
    return 0;
}