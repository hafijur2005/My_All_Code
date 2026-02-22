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

void insert_in_head(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void insert_in_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void delete_fnc(Node *&head, Node *&tail, int index)
{
    if (head == NULL)
        return;

    if (index == 0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        if (head == NULL)
        {
            tail = NULL;
        }
        return;
    }

    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        if (temp->next == NULL)
            return;
        temp = temp->next;
    }

    if (temp->next == NULL)
        return;

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    if (temp->next == NULL)
    {
        tail = temp;
    }
    delete deleteNode;
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

int main()
{
    int t;
    cin >> t;

    Node *head = NULL;
    Node *tail = NULL;

    while (t--)
    {
        int x;
        int V;
        cin >> x >> V;

        if (x == 0)
        {
            insert_in_head(head, tail, V);
        }
        else if (x == 1)
        {
            insert_in_tail(head, tail, V);
        }
        else if (x == 2)
        {
            delete_fnc(head, tail, V);
        }

        print(head);
    }

    return 0;
}
