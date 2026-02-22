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
void insert(Node *&head, Node *&tail, int value)
{
    Node *newnode = new Node(value);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void print(Node *head)
{
    long long max = 0.0000000001, min = 9999999999;
    for (Node *temp = head; temp != NULL; temp = temp->next)
    {
        if (min > temp->value)
            min = temp->value;
        if (max < temp->value)
            max = temp->value;
    }
    cout << max - min;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    while (1)
    {

        cin >> n;

        if (n == -1)
        {
            break;
        }
        insert(head, tail, n);
    }
    print(head);

    return 0;
}