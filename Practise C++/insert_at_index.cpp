#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    long long int val;
    Node *next;

    Node(long long int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_end(Node *&head, Node *&Tail, long long int val);

void getdata(Node *&Head, Node *&Tail)
{
    long long int val;
    while (cin >> val)
    {
        if (val == -1)
            break;
        insert_at_end(Head, Tail, val);
    }
}

void insert_at_end(Node *&head, Node *&Tail, long long int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        Tail = newNode;
        return;
    }
    Tail->next = newNode;
    Tail = newNode;
}

bool insert_at_pos(Node *&Head, Node *&Tail, int index, int val)
{
    if (Head == NULL && index > 0)
        return false;

    Node *newNode = new Node(val);

    if (index == 0)
    {
        newNode->next = Head;
        Head = newNode;
        if (Tail == NULL)
        {
            Tail = newNode;
        }
        return true;
    }

    Node *temp = Head;

    for (int i = 0; i < index - 1; i++)
    {
        if (temp == NULL)
        {
            delete newNode;
            return false;
        }
        temp = temp->next;
    }

    if (temp == NULL)
    {
        delete newNode;
        return false;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    if (newNode->next == NULL)
    {
        Tail = newNode;
    }
    return true;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *Head = NULL;
    Node *Tail = NULL;

    getdata(Head, Tail);

    long long q;
    if (cin >> q)
    {
        while (q--)
        {
            long long index, val;
            cin >> index >> val;

            if (insert_at_pos(Head, Tail, index, val))
            {
                print_linked_list(Head);
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }
    return 0;
}
