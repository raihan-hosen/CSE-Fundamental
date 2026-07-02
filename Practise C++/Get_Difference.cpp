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
    Node *head = nullptr;
    Node *tail = nullptr;
    int val;

    while (cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }

    if (head == nullptr)
    {
        cout << 0 << "\n";
        return 0;
    }

    long long max_val = LLONG_MIN;
    long long min_val = LLONG_MAX;

    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->val > max_val)
        {
            max_val = temp->val;
        }
        if (temp->val < min_val)
        {
            min_val = temp->val;
        }
        temp = temp->next;
    }

    cout << (max_val - min_val) << "\n";

    temp = head;
    while (temp != nullptr)
    {
        Node *nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }

    return 0;
}
