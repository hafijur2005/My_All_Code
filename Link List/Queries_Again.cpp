#include <bits/stdc++.h>
using namespace std;


class Node
{
public:
    int val;
    Node *next;
    Node *pre;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};

void insert(Node *&head, Node *&tail, int index, int val, bool &flag,int &size)
{

    if (index > size)
    {
        flag = true;
        return;
    }

    Node *newnode = new Node(val);

    if (index == 0)
    {
        newnode->next = head;
        if (head != NULL)
        {
            head->pre = newnode;
        }
        head = newnode;
        if (tail == NULL)
        {
            tail = newnode;
        }
    }
    else if (index == size)
    {

        newnode->pre = tail;
        if (tail != NULL)
        {
            tail->next = newnode;
        }
        tail = newnode;
        if (head == NULL)
        {
            head = newnode;
        }
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < index; ++i)
        {
            temp = temp->next;
        }

        newnode->next = temp;
        newnode->pre = temp->pre;

        if (temp->pre != NULL)
        {
            temp->pre->next = newnode;
        }
        temp->pre = newnode;
    }

    size++;
}
void print_rev(Node *tail)
{
    Node *temp = tail;
    cout << "R -> ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->pre;
    }
}
void print(Node *head, Node *tail, bool &flag)
{
    if (flag == true)
    {
        cout << "Invalid";
        flag = false;
        return;
    }
    Node *temp = head;
    cout << "L -> ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
    print_rev(tail);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    bool flag = false;
    int t,size=0;
    cin >> t;
    while (t--)
    {
        int ind, val;
        cin >> ind >> val;
        insert(head, tail, ind, val, flag,size);

        print(head, tail, flag);
        cout << endl;
    }
    

    return 0;
}