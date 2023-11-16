//optimal
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution
// {
// public:
//     ListNode *removeNthFromEnd(ListNode *head, int n)
//     {
//         ListNode *fast, *slow;
//         fast = slow = head;
//         for (int i = 0; i < n; i++)
//             fast = fast->next;
//         ListNode *temp = head;
//         // if the to be deleted node is the frst nod ewe simply return the head->next;
//         if (!fast)
//         {
//             head = head->next;
//             delete temp;
//             return head;
//         }
//         // fst->next inside while because we want our slow pointer to stop before the node we want to delete since to delete the node we need to know the previous node
//         while (fast->next)
//         {
//             fast = fast->next;
//             slow = slow->next;
//         }
//         temp = slow->next;
//         slow->next = temp->next;
//         delete temp;
//         return head;
//     }
// };
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution
// {
// public:
//     ListNode *removeNthFromEnd(ListNode *head, int n)
//     {
//         if (head->next == NULL)
//             return NULL;
//         ListNode *curr = head;
//         ListNode *prev = NULL;
//         int ct = 1;
//         while (curr != NULL)
//         {
//             ListNode *temp = curr;
//             int x = n;
//             while (x--)
//             {
//                 temp = temp->next;
//             }
//             if (temp == NULL)
//             {
//                 if (ct == 1)
//                 {
//                     // if we are aksed to dekete the first element
//                     return curr->next;
//                 }
//                 prev->next = curr->next;
//                 curr->next = NULL;
//                 break;
//             }
//             prev = curr;
//             curr = curr->next;
//             ct++;
//         }

//         return head;
//     }
// };