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
Node *tree_input()
{
    int n;
    cin >> n;
    Node *root = new Node(n);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *fnt = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *newleft = NULL;
        Node *newright = NULL;

        if (l != -1)
        {
            newleft = new Node(l);
        }
        if (r != -1)
        {
            newright = new Node(r);
        }

        fnt->left = newleft;
        fnt->right = newright;

        if (fnt->left)
            q.push(fnt->left);
        if (fnt->right)
            q.push(fnt->right);
    }
    return root;
}

void print_by_level(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *fnt = q.front();
        q.pop();
        cout << fnt->val << " ";
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
    Node *root;
    root = tree_input();
    print_by_level(root);

    return 0;
}