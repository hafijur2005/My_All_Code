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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Node *head = NULL;
        Node *tail = NULL;
        int a;
        cin >> a;
        insert_in_head(head, tail, a);
        for (int i = 1; i < n; i++)
        {
            int x;
            cin >> x;
            if (x < a)
                insert_in_head(head, tail, x);
            else
                insert_in_tail(head, tail, x);
            a = head->value;
        }

        print(head);
        cout << endl;
    }
    return 0;
}
/*
4
1 2 3 4
4
1 2 4 3
4
1 3 2 4
4
1 3 4 2
4
1 4 2 3
4
1 4 3 2
4
2 1 3 4
4
2 1 4 3
4
2 3 1 4
4
2 3 4 1
4
2 4 1 3
4
2 4 3 1
4
3 1 2 4
4
3 1 4 2
4
3 2 1 4
4
3 2 4 1
4
3 4 1 2
4
3 4 2 1
4
4 1 2 3
4
4 1 3 2
4
4 2 1 3
4
4 2 3 1
4
4 3 1 2
4
4 3 2 1
5
1 2 3 4 5
5
1 2 3 5 4
5
1 2 4 3 5
5
1 2 4 5 3
5
1 2 5 3 4
5
1 2 5 4 3
5
1 3 2 4 5
5
1 3 2 5 4
*/
/*
1 2 3 4
1 2 4 3
1 3 2 4
1 3 4 2
1 4 2 3
1 4 3 2
1 2 3 4
1 2 4 3
1 2 3 4
1 2 3 4
1 2 4 3
1 2 4 3
1 3 2 4
1 3 4 2
1 2 3 4
1 2 3 4
1 3 4 2
1 2 3 4
1 4 2 3
1 4 3 2
1 2 4 3
1 2 4 3
1 3 4 2
1 2 3 4
1 2 3 4 5
1 2 3 5 4
1 2 4 3 5
1 2 4 5 3
1 2 5 3 4
1 2 5 4 3
1 3 2 4 5
1 3 2 5 4
1 3 4 2 5
1 3 4 5 2
1 3 5 2 4
1 3 5 4 2
1 4 2 3 5
1 4 2 5 3
1 4 3 2 5
1 4 3 5 2
1 4 5 2 3
*/