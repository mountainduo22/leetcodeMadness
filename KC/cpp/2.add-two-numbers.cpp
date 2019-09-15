/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int index = 0;
        int first, second;
        int sum = 0, carryOver = 0;
        ListNode *ret = NULL;
        ListNode **tail = &ret;
        while (l1 != NULL || l2 != NULL)
        {
            first = getNext(l1);
            second = getNext(l2);

            sum = first + second + carryOver;

            ListNode *node = new ListNode(sum % 10);
            *tail = node;
            tail = (&node->next);

            carryOver = sum / 10;
        }

        if (carryOver > 0)
        {
            ListNode *node = new ListNode(carryOver % 10);
            *tail = node;
        }

        return ret;
    }

    int getNext(ListNode *&node)
    {
        int x;
        if (node != NULL)
        {
            x = node->val;
            node = node->next;
        }

        return x;
    }
};
