// https://leetcode.com/problems/middle-of-the-linked-list/

// class Solution {
// public:

//     //approach 1 : brute force using two passes of linked list
//     //step1 : find length of ll
//     //step2 : odd length then pos = size/2 +1
//             //even length then pos = size/2+1

//     int getLengthOfLL(ListNode* head){
//         ListNode* temp = head;
//         int len=0;

//         while(temp!=NULL){
//             temp=temp->next;
//             len++;
//         }
//         return len;
//     }

//     ListNode* bruteForce(ListNode* head){
//         int size = getLengthOfLL(head);
//         int position = size/2+1;
        
//         ListNode* temp = head;
//         while(position!=1){
//             position--;
//             temp = temp->next;
//         }

//         return temp;

//         //tc -> o(n) but two passes (one pass for find length and other other finding 
//         //middle node)
//         //sc -> o(1)
//     }


//     //tortoise algorithm -> slow and fast algo
//     ListNode* slowAndFast(ListNode* head){
//         ListNode* fast = head;
//         ListNode* slow = head;
//         ListNode* temp = head;

//         while(fast!=NULL){
//             fast = fast->next;
//             if(fast!=NULL){
//                 fast = fast->next;
//                 //mai yahan keh skta huun fast ne 2 step chl liye hai
//                 //ab slow bhi chalwao ek step
//                 slow = slow->next;
//             }
//         }
//         return slow;

//         //tc -> O(n) (only 1 pass so more optimised)
//         //sc -> O(1)
//     }

    
//     ListNode* middleNode(ListNode* head) {
//         return bruteForce(head);
//         return slowAndFast(head);
//     }
// };