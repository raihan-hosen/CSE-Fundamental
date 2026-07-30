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

ll sum_non_leaf(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 0;
    }

    return root->val + sum_non_leaf(root->left) + sum_non_leaf(root->right);
}

int main()
{
    Node *root = input_tree();
    cout << sum_non_leaf(root) << endl;
    return 0;
}