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

long long int count(Node *head, Node *tail)
{
    Node *temp = head;
    long long int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
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

int main()
{
    Node *Head1 = NULL, *Head2 = NULL;
    Node *Tail1 = NULL, *Tail2 = NULL;
    getdata(Head1, Tail1);
    getdata(Head2, Tail2);

    long long int c1 = count(Head1, Tail1);
    long long int c2 = count(Head2, Tail2);

    if (c1 == c2)
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}