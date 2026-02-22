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
    newnode->next = head;
    head->pre = newnode;
    head = newnode;
}
void inser_in_any(Node *&head, Node *&tail, int value)
{
    Node *newnode = new Node(value);
    Node *temp = head;
    while (temp->value != 20)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next->pre = newnode;
    newnode->pre = temp;
    temp->next = newnode;
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
void delet_in_head(Node *&head)
{
    Node *delet_list = head;
    head = head->next;
    head->pre = NULL;
    delete (delet_list);
}
void delet_in_any(Node *&head)
{
    Node *deleted = head;
    while (deleted->value != 20)
    {
        deleted = deleted->next;
    }
    deleted->pre->next = deleted->next;
    deleted->next->pre = deleted->pre;
    delete (deleted);
}
void delet_in_tail(Node *&tail)
{
    Node *deleted = tail;
    tail = tail->pre;
    tail->next = NULL;
    delete (deleted);
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
}
void print_rev(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->pre;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);
    head->next = a;
    a->pre = head;
    a->next = tail;
    tail->pre = a;

    insert_in_head(head, tail, 50);
    inser_in_any(head, tail, 75);
    insert_in_tail(head, tail, 100);

    print(head);

    delet_in_head(head);
    delet_in_any(head);
    delet_in_tail(tail);

    cout << endl;

    print_rev(tail);
    return 0;
}