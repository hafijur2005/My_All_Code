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
vector<int> vec;

void leaf_Nodes(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *fnt = q.front();
        q.pop();

        if (fnt->left == NULL && fnt->right == NULL)
        {
            vec.push_back(fnt->val);
        }

        if (fnt->left)
            q.push(fnt->left);
        if (fnt->right)
            q.push(fnt->right);
    }
    sort(vec.begin(), vec.end(), greater<int>());
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}
int main()
{
    Node *root;
    root = input();
    leaf_Nodes(root);
    return 0;
}