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

void count_level(Node *root)
{
    int n;
    cin>>n;
    if (!root) {
        cout << 0;
        return;
    }

    queue<Node *> q;
    q.push(root);
    int levels = 0;

    while (!q.empty())
    {
        int size = q.size(); 
        for (int i = 0; i < size; i++)
        {
            Node *fnt = q.front();
            q.pop();
            if(levels==n)
            {
                cout<<fnt->val<<" ";
            }
            if (fnt->left)
                q.push(fnt->left);
            if (fnt->right)
                q.push(fnt->right);
        }
        levels++;
    }
    if(n>=levels)
    {
        cout<<"Invalid";
    }
}

int main()
{
    Node *root;
    root = input();
    count_level(root);
    return 0;
}