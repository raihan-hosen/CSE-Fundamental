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

void insert_at_end(Node *&head, Node *&Tail, long long int val)
{
    Node *newNode = new Node(val);
    if (head->next == NULL)
    {
        head->next = newNode;
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
        // cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
    return count;
}

int main()
{
    Node *Head = new Node(2);
    Node *Tail = Head;

    insert_at_end(Head, Tail, 1);
    insert_at_end(Head, Tail, 5);
    insert_at_end(Head, Tail, 3);
    // insert_at_end(Head, Tail, 4);
    // insert_at_end(Head, Tail, 8);
    // insert_at_end(Head, Tail, 9);

    cout << print_linked_list(Head);
    return 0;
}