// https://leetcode.com/problems/linked-list-cycle-ii/submissions/1097176739/

// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
        
//         ListNode* slow = head;
//         ListNode* fast = slow;

//         while(fast != NULL){
//             fast = fast->next;
//             if(fast!= NULL){
//                 fast = fast->next;
//                 //fast 2 step aage ja chuka hai
//                 //ab slow ko 1 step aage badhao
//                 slow = slow->next;
//             }

//             if(fast==NULL){
//                 //means no cycle in list
//                 return NULL;
//             }

//             if(fast == slow){
//                 //means cycle in list
//                 slow = head;

//                 while(slow != fast){
//                     //slow and fast ko 1-1 step aage badhate rho jb tk slow == fast
//nhi hota
//                     //jb equal ho jaaye it means slow and fast are at source point of loop
//                     slow = slow->next;
//                     fast = fast->next;
//                 }
                
//                 //now slow and fast are at source point of loop
//                 return slow;//return fast
//             }
//         }
//         return slow;

//         //tc -> O(n)
//         //sc -> O(1)
//     }
// };