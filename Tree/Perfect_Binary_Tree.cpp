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
Node *input()
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
            newleft = new Node(l);
        if (r != -1)
            newright = new Node(r);
        fnt->left = newleft;
        fnt->right = newright;

        if (fnt->left)
            q.push(fnt->left);
        if (fnt->right)
            q.push(fnt->right);
    }
    return root;
}
int find_node(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    int l = find_node(root->left);
    int r = find_node(root->right);
    return l + r + 1;
}
int find_hight(Node *root)
{
    int l, r;
    if (root == NULL)
    {
        return 1;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    l = find_hight(root->left);
    r = find_hight(root->right);
    return max(l, r) + 1;
}

int main()
{
    Node *root;
    root = input();
    int node = find_node(root);
    int hight = find_hight(root);
    if (pow(2, hight) - 1 == node)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}