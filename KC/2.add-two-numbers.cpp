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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int index = 0; int first, second;
        int sum = 0, carryOver = 0;

        while (l1!= NULL || l2!= NULL) {

            first = getNext(l1);
            second = getNext(l2);
            sum = first + second;
            if (sum >= 10) {
                carryOver = 1;
                sum -= 10;
            }
            ListNode* ret = new ListNode(sum);
            if (carry != 0) {
                ret->val += 1;
                carry = 0;
            }
            
    
        }
        return ret;
    }

    int getNext(ListNode * &node) {
        int x;
        if ( node != NULL ) {
            x = node->val;
            node = node->next;
        }
        
        return x;
    }
};

