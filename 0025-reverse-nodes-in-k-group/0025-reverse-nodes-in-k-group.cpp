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
    void reverse(ListNode* l , int times){
        ListNode* curr = l; 
        ListNode* prev = nullptr;
        while( times--){
            ListNode* nex = curr -> next ;
            curr -> next = prev;
            prev = curr;
            curr = nex;
        }return ;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head)return nullptr;
        ListNode* left = head;
        ListNode* right = nullptr;
        ListNode* res = nullptr;
        ListNode* prevLeft = nullptr;
        int size = k;
        while( true ){
            right = left;
            for(int i = 0 ; i < (size - 1) ; i++){
                if(!right)break;
                right = right -> next;
            }
            if(right){
                ListNode* nextLeft = right -> next;
                reverse( left , size);
                if(prevLeft)prevLeft -> next = right;
                prevLeft = left;
                if(!res)res = right;
                left = nextLeft;
            }else{
                if(prevLeft)prevLeft -> next = left;
                if(!res)res = left;
                break;
            }
        }return res;
    }
};