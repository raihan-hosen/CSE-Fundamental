#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

class Node
{
public:
    ll val;
    Node *left;
    Node *right;

    Node(ll val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    ll val;
    cin >> val;
    if (val == -1)
    {
        return NULL;
    }

    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        ll l, r;
        cin >> l >> r;

        Node *myLeft = NULL;
        Node *myRight = NULL;

        if (l != -1)
        {
            myLeft = new Node(l);
        }
        if (r != -1)
        {
            myRight = new Node(r);
        }

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }

    return root;
}

void left_boundary(Node *root, vector<ll> &v)
{
    if (root == NULL)
        return;
    Node *cur = root;
    while (cur)
    {
        v.push_back(cur->val);
        if (cur->left)
            cur = cur->left;
        else
            cur = cur->right;
    }
}

void right_boundary(Node *root, vector<ll> &v)
{
    if (root == NULL)
        return;
    Node *cur = root;
    while (cur)
    {
        v.push_back(cur->val);
        if (cur->right)
            cur = cur->right;
        else
            cur = cur->left;
    }
}

int main()
{
    Node *root = input_tree();
    if (root == NULL)
        return 0;

    vector<ll> left_nodes;
    vector<ll> right_nodes;

    if (root->left)
    {
        left_boundary(root->left, left_nodes);
    }

    if (root->right)
    {
        right_boundary(root->right, right_nodes);
    }

    for (ll i = left_nodes.size() - 1; i >= 0; i--)
    {
        cout << left_nodes[i] << " ";
    }

    cout << root->val << " ";

    for (ll i = 0; i < right_nodes.size(); i++)
    {
        cout << right_nodes[i] << " ";
    }
    cout << endl;

    return 0;
}