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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head; 
        ListNode* pt1, *pt2;
        pt1 = head;
        pt2 = head->next; 
        head->next = NULL;
        while(pt2->next != NULL)
        {
            head = pt2->next;
            pt2->next = pt1; 
            pt1 = pt2; 
            pt2 = head;
        }
        pt2->next = pt1; 
        return pt2; 
    }
};