#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* input()
{
    int n;
    cin>>n;
    Node* root=new Node(n);
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node* fnt=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* newleft=NULL;
        Node* newright=NULL;
        if(l!=-1) newleft=new Node(l);
        if(r!=-1) newright=new Node(r);
        fnt->left=newleft;
        fnt->right=newright;

        if(fnt->left) q.push(fnt->left);
        if(fnt->right) q.push(fnt->right);
    }
    return root;
}
int sum1=0;
int sum(Node* root)
{
    
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node* fnt=q.front();
        q.pop();
        if(fnt==NULL)
        {
            return 0;
        }
        if(fnt->left==NULL&&fnt->right==NULL)
        {
            return 0;
        }
        sum(fnt->left);
        sum(fnt->right);
        sum1+=fnt->val;
    }
    return sum1;
}

int main()
{
    Node* root;
    root=input();
    int x=sum(root);
    cout<<x;
    return 0;
}