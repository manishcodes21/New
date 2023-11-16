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
    //     ListNode *reverse(ListNode *head)
    //     {
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
    //     bool isPalindrome(ListNode *head)
    //     {
    //         if (head == NULL || head->next == NULL)
    //             return true;

    //         ListNode *slow = head;
    //         ListNode *fast = head;
    //         // found middle element
    //         while (fast != NULL && fast->next != NULL)
    //         {
    //             fast = fast->next->next;
    //             slow = slow->next;
    //         }

    //         // reversing second half
    //         ListNode *secondhalf = reverse(slow);

    //         // comparing first half with second half
    //         ListNode *temp = head;
    //         while (secondhalf != NULL && temp != NULL)
    //         {
    //             if (secondhalf->val != temp->val)
    //                 return false;
    //             secondhalf = secondhalf->next;
    //             temp = temp->next;
    //         }

    //         return true;
    //     }
    // };