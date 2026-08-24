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
   ListNode* oddEvenList(ListNode* head) {
//         if(head==NULL ) return NULL;
//         if(head->next==NULL) return head;
//         vector<int>v;
//         ListNode* temp= head;
//         while(temp!=NULL && temp->next!=NULL){
//             v.push_back(temp->val);
//             temp=temp->next->next;
//         } if(temp){ v.push_back(temp->val);}
//         temp=head->next;
//         while(temp!=NULL&& temp->next!=NULL){
//          v.push_back(temp->val);
//          temp=temp->next->next;
//         }
//         if(temp){ v.push_back(temp->val);}//agr ek node bach jae toh
//         temp=head;
//         int i=0;
//       for(int i =0;i<v.size();i++){
//     temp->val=v[i];
//     temp=temp->next;
//       }
// return head;
// Optimal
if(head==NULL)return NULL;
if(head->next==NULL)return head;
ListNode* odd=head;
ListNode* even=head->next;
ListNode* evenhead=head->next;
while(even!=NULL && even->next!=NULL){
  odd->next=odd->next->next;
  even->next=even->next->next;
  odd=odd->next;
  even=even->next;
}odd->next=evenhead;
return head;
    }
};