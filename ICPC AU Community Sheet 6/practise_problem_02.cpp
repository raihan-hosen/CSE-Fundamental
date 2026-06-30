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

bool checkduplicate(Node *Head)
{
    bool check = 0;
    Node *temp = Head;
    vector<int> fre(101, 0);

    while (temp != NULL)
    {
        if (fre[temp->val] > 0)
        {
            check = 1;
            break;
        }
        else
        {
            fre[temp->val]++;
        }
        temp = temp->next;
    }
    return check;
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

    bool check = checkduplicate(Head);
    if (check == 1)
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}