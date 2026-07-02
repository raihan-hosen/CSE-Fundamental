#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int main()
{
    Node *head1 = nullptr;
    Node *tail1 = nullptr;
    int val;

    while (cin >> val && val != -1)
    {
        insert_at_tail(head1, tail1, val);
    }

    Node *head2 = nullptr;
    Node *tail2 = nullptr;

    while (cin >> val && val != -1)
    {
        insert_at_tail(head2, tail2, val);
    }

    Node *temp1 = head1;
    Node *temp2 = head2;
    bool is_same = true;

    while (temp1 != nullptr && temp2 != nullptr)
    {
        if (temp1->val != temp2->val)
        {
            is_same = false;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (temp1 != nullptr || temp2 != nullptr)
    {
        is_same = false;
    }

    if (is_same)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
