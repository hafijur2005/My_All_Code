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
void pre_order(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    pre_order(root->left);
    pre_order(root->right);
}

void in_order(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    in_order(root->left);
    cout << root->val << " ";
    in_order(root->right);   
}
void post_order(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    post_order(root->left);
    post_order(root->right);
    cout << root->val << " ";   
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

    cout<<"Pre Order travarsal = "; 
    pre_order(root);
    cout<<"\n\n";
    cout<<"In Order travarsal = ";
    in_order(root);
    cout<<"\n\n";
    cout<<"Post Order travarsal = ";
    post_order(root);
    return 0;
}