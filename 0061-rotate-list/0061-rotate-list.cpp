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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)return nullptr;
        if(!(head ->next))
        return head;
        int len = 1 ;
        ListNode* curr = head;
        ListNode* lastNode = nullptr;
        while( curr -> next){
            curr = curr -> next;
            len++;
        }
        lastNode = curr;
        curr = head;
        k = k % len;
        if(!k)return head;
        lastNode -> next = head;
        int remNode = len - k - 1;
        while( remNode-- ){
            curr = curr -> next ;
        }
        head = curr -> next;
        curr -> next = NULL; 
        return head;

    }
};