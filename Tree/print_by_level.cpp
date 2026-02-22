#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void print_by_level(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *fnt = q.front();
        q.pop();
        cout<<fnt->val<<" ";
        if (fnt->left)
        {
            q.push(fnt->left);
        }

        if (fnt->right)
        {
            q.push(fnt->right);
        }
    }
}
int main()
{
    Node *root = new Node(10);
    Node *a = new Node(5);
    Node *b = new Node(3);
    Node *c = new Node(1);
    Node *d = new Node(4);
    Node *e = new Node(2);
    Node *f = new Node(6);
    Node *g = new Node(8);
    Node *h = new Node(7);
    Node *i = new Node(9);

    root->left = a;
    root->right = f;
    a->left = b;
    a->right = d;
    b->left = c;
    d->left = e;
    f->left = h;
    f->right = g;
    g->left = i;

    print_by_level(root);
    return 0;
}