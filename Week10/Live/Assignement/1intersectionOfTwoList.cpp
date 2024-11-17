// https://leetcode.com/problems/intersection-of-two-linked-lists/description/

// class Solution {
// public:
//     int lengthOfList(ListNode* a){
//         ListNode* temp = a;
//         int count = 0;
//         while(temp){
//             temp=temp->next;
//             count++;
//         }
//         return count;
//     }
//     // ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//     //     int lengthA = lengthOfList(headA);
//     //     int lengthB = lengthOfList(headB);
//     //     int diff = abs(lengthA - lengthB);
//     //     ListNode* a = headA;
//     //     ListNode* b = headB;
//     //     while(diff--){
//     //         if(lengthA>lengthB){
//     //             a = a->next;
//     //         }else if(lengthB>lengthA){
//     //             b = b->next;
//     //         }
//     //     }
        
//     //     while(a && b){
//     //         if(a==b){
//     //             return a;
//     //         }
//     //         a = a->next;
//     //         b = b->next;
//     //     }
//     //     return NULL;
//     // }
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

//         ListNode* a = headA;
//         ListNode* b = headB;

//         while(a->next && b->next){
//             if(a==b){
//                 //same length of both list
//                 return a;
//             }
//             a=a->next;
//             b=b->next;
//         }

//         if(a->next==NULL && b->next==NULL && a!=b){
//             //no intersection
//             return NULL;
//         }

//         if(a->next==0){
//             //B LL is bigger or equal
//             //we need to find out how much bigger is?
//             int blen = 0;
//             while(b->next){
//                 b=b->next;
//                 blen++;
//             }

//             while(blen--){
//                 headB = headB->next;
//             }
//         }else{
//             //A LL is bigger
//             //we need to find out how much bigger is?
//             int alen = 0;
//             while(a->next){
//                 a=a->next;
//                 alen++;
//             }

//             while(alen--){
//                 headA= headA->next;
//             }

//         }

//         while(headA!=headB){
//             headA = headA->next;
//             headB = headB->next;
//         }
//         return headA;
//         //tc -> O(n)
//         //sc -> O(1)
//     }
// };