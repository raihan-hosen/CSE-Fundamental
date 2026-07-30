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

void print_level(Node *root, ll target_level)
{
    if (root == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }

    queue<Node *> q;
    q.push(root);
    ll current_level = 0;

    while (!q.empty())
    {
        ll sz = q.size();

        if (current_level == target_level)
        {
            for (ll i = 0; i < sz; i++)
            {
                Node *cur = q.front();
                q.pop();
                cout << cur->val << " ";
            }
            cout << endl;
            return;
        }

        for (ll i = 0; i < sz; i++)
        {
            Node *cur = q.front();
            q.pop();

            if (cur->left)
            {
                q.push(cur->left);
            }
            if (cur->right)
            {
                q.push(cur->right);
            }
        }

        current_level++;
    }

    cout << "Invalid" << endl;
}

int main()
{
    Node *root = input_tree();
    ll x;
    cin >> x;

    print_level(root, x);

    return 0;
}