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
void maximum_value(Node *Head)
{
    long long max = Head->val;
    while (Head != NULL)
    {
        if (max < Head->val)
        {
            swap(max, Head->val);
        }
        Head = Head->next;
    }
    cout << max;
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
    Node *Head = NULL;
    Node *Tail = NULL;
    getdata(Head, Tail);
    maximum_value(Head);
    return 0;
}