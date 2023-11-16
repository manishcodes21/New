/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */

// Node *constructLL(vector<int> &arr)
// {
//     // Write your code here
//     int i = 1;
//     Node *head = new Node(arr[0]);

//     Node *temp = head; // storing head value
//     while (i < arr.size())
//     {
//         Node *new_node = new Node(arr[i]);
//         new_node->next = NULL;
//         temp->next = new_node; // assigning pointer to node 1
//         temp = new_node;       // temp is new_node
//         i++;
//     }

//     return head;
// }