// https://leetcode.com/problems/reverse-linked-list/

// class Solution {
// public:
//     ListNode* reverseListIterative(ListNode* head){
//         ListNode* prev = NULL;
//         ListNode* curr = head;

//         if(head==NULL){
//             //empty list
//             return head;
//         }

//         while(curr != NULL){
//             ListNode* nextNode = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = nextNode;
//         }
//         head = prev;

//         return head;

//         //tc -> O(n)
//         //sc->O(1)
//     }

//     ListNode* reverseListRecursiveApproach(ListNode* prev,ListNode* curr){
//         //1 node ko hum reverse krenge baaki recursion smbhal lega

//         //base case
//         if(curr==NULL){
//             //prev points to head of linked list
//             return prev;
//         }

//         //1 case hum solve krenge
//         ListNode* nextNode = curr->next;
//         curr->next = prev; //link break ho gya hai next node se so pehle link preserve kr lo
//         prev = curr;
//         curr = nextNode;

//         //recursion
//         ListNode* recursionAns = reverseListRecursiveApproach(prev,curr);
//         return recursionAns;

//         //tc -> O(n)
//         //sc -> O(n)

//     }
//     ListNode* reverseList(ListNode* head) {
//         // return reverseListIterative(head);

//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         return reverseListRecursiveApproach(prev,curr);
//     }
// };