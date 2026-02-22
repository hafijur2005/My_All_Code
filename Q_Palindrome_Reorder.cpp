#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    char value;
    Node *next;
    Node *pre;
    Node(char value)
    {
        this->value = value;
        this->next = NULL;
        this->pre = NULL;
    }
};

void insert_in_head(Node *&head, Node *&tail, char value)
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

void insert_in_tail(Node *&head, Node *&tail, char value)
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
        cout << temp->value;
        temp = temp->next;
    }
}

int main()
{
    int arr[26] = {0};
    string s;
    Node *head = NULL;
    Node *tail = NULL;

    cin >> s;

    for (int i = 0; i < s.size(); i++)
        arr[s[i] - 'A']++;

    int x = -1, count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] % 2 == 1)
        {
            x = i;
            count++;
        }
    }

    if (count > 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < arr[i] / 2; j++)
        {
            insert_in_tail(head, tail, 'A' + i);
        }
    }
    if (x != -1)
    {
        insert_in_tail(head, tail, 'A' + x);
    }
    for (int i = 25; i >= 0; i--)
    {
        for (int j = 0; j < arr[i] / 2; j++)
        {
            insert_in_tail(head, tail, 'A' + i);
        }
    }

    print(head);

    return 0;
}
