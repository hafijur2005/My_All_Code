#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_in_tail(Node *&head, Node *&tail, int val)
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
    ;
}
void copy(Node *head, Node *&newhead, Node *&newtail)
{

    Node *temp = head;
    while (temp != NULL)
    {
        insert_in_tail(newhead, newtail, temp->val);
        temp = temp->next;
    }
}
void revers(Node *&newhead, Node *&newtail)
{
    Node *temp1 = newhead;
    Node *temp2 = newtail;
    while (temp1->next != temp2->next && temp1->prev != temp2)
    {
        swap(temp1->val, temp2->val);
        temp1 = temp1->next;
        temp2 = temp2->prev;
    }
}
bool check_palidrome(Node *head, Node *newhead)
{
    Node *temp1 = head;
    Node *temp2 = newhead;
    while (temp1 != NULL)
    {
        if (temp1->val != temp2->val)
            return false;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return true;
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
    Node *newhead = NULL;
    Node *newtail = NULL;
    int n;
    while (1)
    {
        cin >> n;
        if (n == -1)
            break;
        insert_in_tail(head, tail, n);
    }
    // print(head);
    //cout << endl;
    copy(head, newhead, newtail);
    revers(newhead, newtail);
    // print(newhead);
    bool flag = check_palidrome(head, newhead);
    if (flag)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}