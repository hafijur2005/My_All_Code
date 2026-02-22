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

void delet_in_any(Node *&head, Node *&tail, Node *deleted)
{
    if (deleted == NULL)
        return;
    if (deleted->pre != NULL)
        deleted->pre->next = deleted->next;
    else
        head = deleted->next;
    if (deleted->next != NULL)
        deleted->next->pre = deleted->pre;
    else
        tail = deleted->pre;
    delete deleted;
}

int play_game(Node *&head, Node *&tail)
{
    int count = 0;
    bool flag = true;

    while (flag)
    {
        flag = false;
        Node *temp = head;
        while (temp != NULL && temp->next != NULL)
        {
            if (temp->value != temp->next->value)
            {
                Node *a = temp;
                Node *b = temp->next;
                temp = b->next;
                delet_in_any(head, tail, a);
                delet_in_any(head, tail, b);
                count++;
                flag = true;
                break;
            }
            else
                temp = temp->next;
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        Node *head = NULL;
        Node *tail = NULL;

        for (int i = 0; i < n; i++)
        {
            insert_in_tail(head, tail, s[i] - '0');
        }

        int count = play_game(head, tail);

        if (count % 2 == 1)
            cout << "Zlatan\n";
        else
            cout << "Ramos\n";

        while (head != NULL)
        {
            Node *tmp = head;
            head = head->next;
            delete tmp;
        }
    }
    return 0;
}
