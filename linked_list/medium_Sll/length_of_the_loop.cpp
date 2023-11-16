//optimal
/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/

// int lengthOfLoop(Node *head)
// {
//     // Write your code here

//     Node *slow = head;
//     Node *fast = head;

//     while (fast != NULL && fast->next != NULL)
//     {
//         fast = fast->next->next;
//         slow = slow->next;

//         if (fast == slow)
//         {
//             break;
//         }
//     }
//     slow = slow->next;
//     int ct = 1;
//     while (slow != fast)
//     {
//         if (slow == NULL || slow->next == NULL)
//             return 0;
//         ct++;
//         slow = slow->next;
//     }

//     return ct;
// }

// /**
//  * Definition of linked list:
//  *
//  * class Node {
//  * public:
//  *      int data;
//  *      Node *next;
//  *
//  *      Node(int data) {
//  *          this->data = data;
//  *          this->next = NULL;
//  *      }
//  * };
//  *
//  *************************************************************************/

// int lengthOfLoop(Node *head)
// {
// well this method is bad since we are altering the linked list
//     // Write your code here
//     Node *slow = head;
//     Node *fast = head;
//     int f = 0;
//     int ct = 0;
//     int original;
//     while (fast != NULL && fast->next != NULL)
//     {
//         fast = fast->next->next;
//         slow = slow->next;
//         if (slow->data == 0)
//         {
//             slow->data = original;
//             return ct;
//         }
//         if (f == 0 && fast == slow)
//         {
//             original = slow->data;
//             slow->data = 0;

//             f = 1;
//         }
//         if (f == 1)
//             ct++;
//     }

//     return 0;
// }
