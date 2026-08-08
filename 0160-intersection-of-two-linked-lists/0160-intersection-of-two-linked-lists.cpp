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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        // ListNode* temp1=headA;
        // ListNode* temp2=headB;
        // unordered_set<ListNode*>st;
        // while(temp1!=NULL){
        //     st.insert(temp1);
        //     temp1=temp1->next;
        // }
        // while(temp2!=NULL){
        //     if(st.count(temp2)){
        //         return temp2;
        //     } temp2=temp2->next;
        // }
        // return NULL;
        if(headA==NULL||headB==NULL)return NULL;
        ListNode* t1=headA;
        ListNode* t2=headB;
        while(t1!=t2){
            t1=t1->next;
            t2=t2->next;
            if(t1==t2)return t1;
            // if(t1->next==NULL&& t2->next==NULL)return t1->next;
            if(t1==NULL)t1=headB;
            if(t2==NULL)t2=headA;
        }
        return t1;
    }
};