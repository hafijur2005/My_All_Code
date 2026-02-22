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

void left_side(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    if(root->left==NULL&&root->right!=NULL)
    {
        left_side(root->right);
    }
    left_side(root->left);
    cout << root->val << " ";
}
void lright_side(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    if(root->right==NULL&&root->left!=NULL)
    {
        lright_side(root->left);
    }
    if(root->right!=NULL) lright_side(root->right);
}

int main()
{
    Node *root;
    root = input();
    left_side(root->left);
    cout<<root->val<<" ";
    lright_side(root->right);
    return 0;
}