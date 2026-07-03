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
    while (cin >> val && val != -1)
    {
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

long long int print_linked_list(Node *&head)
{
    long long int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
    return count;
}

void reverse_print(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    reverse_print(head->next);
    cout << head->val << " ";
}

int main()
{
    Node *Head = NULL;
    Node *Tail = NULL;
    getdata(Head, Tail);
    reverse_print(Head);
    return 0;
}