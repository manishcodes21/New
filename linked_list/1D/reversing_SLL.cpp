//recursive
// class Solution
// {
// public:
//     ListNode *reverseList(ListNode *head)
//     {
//         if (head == NULL || head->next == NULL)
//             return head;
//         ListNode *newhead = reverseList(head->next);
//         head->next->next = head; 
//         head->next = NULL;

//         return newhead;
//     }
// };

//iterative
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
//     ListNode *reverseList(ListNode *head)
//     {
//         if (head == nullptr)
//             return head;
//         ListNode *curr = head;

//         ListNode *prev = NULL;
//         while (curr != NULL)
//         {
//             ListNode *frwd = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = frwd;
//         }

//         return prev;
//     }
// };