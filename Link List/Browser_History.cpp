#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_in_tail(Node *&head, Node *&tail, string val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
void visit(Node *head, Node *&pos, string n)
{
    Node *temp = head;
    bool found = false;
    while (temp != NULL)
    {
        if (temp->val == n)
        {
            found = true;
            break;
        }
        temp = temp->next;
    }
    if (found)
    {
        cout << temp->val << endl;
        pos = temp;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}
void prev(Node *head, Node *&pos)
{
    if (pos->prev == NULL || pos == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        pos = pos->prev;
        cout << pos->val << endl;
    }
}
void next(Node *head, Node *&pos)
{
    if (pos->next == NULL || pos == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        pos = pos->next;
        cout << pos->val << endl;
    }
}

// void print(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
// }
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *pos = head;
    string n;
    while (1)
    {
        cin >> n;
        if (n == "end")
            break;
        insert_in_tail(head, tail, n);
    }
    int t;
    cin >> t;
    while (t--)
    {
        string s, s1;
        cin >> s;
        if (s == "visit")
        {
            cin >> s1;
            visit(head, pos, s1);
        }
        else if (s == "prev")
            prev(head, pos);

        else
            next(head, pos);
    }

    return 0;
}