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

void get_leaf_nodes(Node *root, vector<ll> &leaves)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left == NULL && root->right == NULL)
    {
        leaves.push_back(root->val);
        return;
    }

    get_leaf_nodes(root->left, leaves);
    get_leaf_nodes(root->right, leaves);
}

int main()
{
    Node *root = input_tree();
    vector<ll> leaves;

    get_leaf_nodes(root, leaves);

    sort(leaves.rbegin(), leaves.rend());

    for (ll i = 0; i < leaves.size(); i++)
    {
        cout << leaves[i] << " ";
    }
    cout << endl;

    return 0;
}