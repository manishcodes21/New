#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{
    if (head == NULL)
    {
        head = new Node(d);
        return;
    }
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&head, int d)
{
    if (head == NULL)
    {
        head = new Node(d);
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *temp2 = new Node(d);
    temp->next = temp2;
}

void insertAtPosition(Node *&head, int position, int d)
{
    Node *temp = head;
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    int ct = 1;
    while (ct < position - 1)
    {
        temp = temp->next;
        ct++;
    }
    Node *temp2 = temp->next;
    Node *temp3 = new Node(d);
    temp->next = temp3;
    temp3->next = temp2;
}

void deleteNode(int position, Node *&head)
{
    Node *temp = head;
    int ct = 1;
    if (position == 1)
    {
        head = temp->next;
        temp->next = NULL;
        return;
    }

    while (ct < position - 1)
    {
        temp = temp->next;
        ct++;
    }
    
    Node *temp2 = temp->next;
    Node *temp3 = temp2->next;
    temp->next = temp3;
    temp2->next = NULL;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;

    print(head);
    insertAtHead(head, 12);
    print(head);
    insertAtHead(head, 15);
    print(head);
    insertAtTail(head, 5);
    print(head);
    insertAtTail(head, 3);
    print(head);
    insertAtPosition(head, 3, 100);
    print(head);
    insertAtPosition(head, 1, 1000);
    print(head);
    deleteNode(6, head);
    print(head);
}