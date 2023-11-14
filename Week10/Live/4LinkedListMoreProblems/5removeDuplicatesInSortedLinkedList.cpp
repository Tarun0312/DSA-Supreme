// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         if(head==NULL){
//             //EMPTY LIST
//             return head;    
//         }
//         if(head->next==NULL){
//             //SINGLE ELEMENT
//             return head;
//         }

//         ListNode* temp = head;
//         while(temp!=NULL){
//             if(temp->next!=NULL && temp->val == temp->next->val){
//                 //remove kr do but aisa bhi ho skta hai ki node na ho toh check kro
//                 ListNode* nextNode = temp->next ;
//                 temp->next = nextNode->next;
//                 //isolate duplicate node which is nextNode
//                 nextNode->next = NULL;
//                 delete nextNode;
//             }else{
//                 temp = temp->next;
//             }
//         }
//         return head;
//         //tc -> O(n)
//         //sc -> O(1)
//     }
// };