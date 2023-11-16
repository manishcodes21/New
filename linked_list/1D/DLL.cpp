#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;         

    Node(int d)
    {
        data = d;
        prev = NULL;
        next = NULL;
    }
};

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

void insertAtHead(Node *&head, int val)
{   
    Node *temp = new Node(val);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node *&head, int val)
{
    Node *temp = new Node(val);
    Node *temp1 = head;
    while (temp1->next != NULL)
    {
        temp1 = temp1->next;
    }
    temp1->next = temp;
    temp->prev = temp1;
}

void insertAtPosition(Node *&head, int position, int val)
{
    int ct = 1;
    if (position == 1)
    {
        insertAtHead(head, val);
    }
    Node *temp = new Node(val);
    Node *temp1 = head;
    while (ct < position - 1)
    {
        temp1 = temp1->next;
        ct++;
    }
    Node *temp2 = temp1->next;
    temp1->next = temp;
    temp->prev = temp1;
    if (temp2 != NULL)
    {
        temp->next = temp2;
        temp2->prev = temp;
    }
}

void deleteAtPosition(Node *&head, int position)
{
    int ct = 1;
    if (position == 1)
    {
        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        return;
    }
    Node *temp = head;
    while (ct < position - 1)
    {
        temp = temp->next;
        ct++;
    }
    Node *temp2 = temp->next;
    Node *temp3 = temp2->next;
    if (temp3 != NULL)
    {
        temp->next = temp3;
        temp3->prev = temp;
    }
    else
    {
        temp->next = NULL;
    }
    delete (temp2);
}

int main()
{

    Node *node1 = new Node(10);
    Node *head = node1;
    print(head);
    insertAtHead(head, 11);
    print(head);
    insertAtTail(head, 12);
    print(head);
    insertAtTail(head, 13);
    print(head);
    insertAtTail(head, 14);
    print(head);
    insertAtPosition(head, 6, 15);
    print(head);
    deleteAtPosition(head, 6);
    print(head);
}