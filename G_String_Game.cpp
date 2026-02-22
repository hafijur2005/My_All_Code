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

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->pre = tail;
    tail = newnode;
}

void inser_in_any(Node *&head, Node *&tail, int value)
{
    if (head == NULL)
    {
        cout << "List is empty!\n";
        return;
    }
    Node *newnode = new Node(value);
    Node *temp = head;
    while (temp != NULL && temp->value != 20)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "Value 20 not found!\n";
        delete newnode;
        return;
    }
    newnode->next = temp->next;
    if (temp->next != NULL)
        temp->next->pre = newnode;
    else
        tail = newnode;
    newnode->pre = temp;
    temp->next = newnode;
}

void delet_in_any(Node *&head)
{
    Node *deleted = head;
    while (deleted != NULL && deleted->value != 20)
    {
        deleted = deleted->next;
    }
    if (deleted == NULL)
    {
        cout << "Value 20 not found!\n";
        return;
    }
    if (deleted->pre != NULL)
        deleted->pre->next = deleted->next;
    else
        head = deleted->next; // deleted node is head

    if (deleted->next != NULL)
        deleted->next->pre = deleted->pre;

    delete deleted;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}