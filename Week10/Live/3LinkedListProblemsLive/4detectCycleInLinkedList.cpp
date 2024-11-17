// https://leetcode.com/problems/linked-list-cycle/

// class Solution {
// public:
//     bool bruteForceUsingMap(ListNode* head){
//          map<ListNode*,bool> table;

//         ListNode* temp = head;
//         while(temp!=NULL){
//             if(table[temp] == false){
//                 table[temp] = true;
//             }else{
//                 //loop cycle present
//                 return true;
//             }
//             temp = temp->next;
//         }
//         //while loop end means there is no cycle
//         return false;

//         //tc -> O(n)
//         //sc -> O(n)
//     }

//     //tortoise algorithm
//     bool slowAndFastApproach(ListNode* head){
//         ListNode* slow = head;
//         ListNode* fast = head;

//         while(fast != NULL){
//             fast = fast->next;
//             if(fast != NULL){
//                 fast = fast->next;
//                 //fast 2 step chl chuka hai
//                 //ab slow ko 1 step badhao
//                 slow = slow->next;
//             }
//             if(fast == slow){
//                 //cycle detected
//                 return true;
//             }
//         }
        
//         //yahan pr aaye iska matlab fast == NULL hua
//         //it means linked list mei ek aisi node hai jiska next null ,so no cycle in list
//         return false;

//         //tc -> O(n)
//         //sc -> O(1)
//     }
//     bool hasCycle(ListNode *head) {
//     //    return bruteForceUsingMap(head);
//           return slowAndFastApproach(head);
//     }
// };