// https://leetcode.com/problems/reverse-linked-list/

// class Solution {
// public:
//     //algo -> step1: break list into two halves using middle node
//     //step2 : reverse the right list
//     //step3 : compare left and reverse right list

//     void printList(ListNode* head){
//         ListNode* temp = head;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp = temp->next;
//         }
//         cout<<endl;
//     }
//     ListNode* middleNode(ListNode* head){

//         //using slow and fast but middle node is 3rd node na ki 4th node in case of 6 node list

//         ListNode* fast = head;
//         ListNode* slow = head;

//         while(fast->next != NULL){
//             fast = fast->next;
//             if(fast->next != NULL){
//                 fast = fast->next;
//                 slow = slow->next;
//             }
//         }

//         return slow;
//     }

//     ListNode* reverseList(ListNode* head){
//         ListNode* prev = NULL;
//         ListNode* curr = head;

//         while(curr!=NULL){
//             ListNode* nextNode = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = nextNode;
//         }
//         head = prev;
//         return head;
//     }

//     bool compareList(ListNode* leftHeadList,ListNode* rightHeadList){

//         while(leftHeadList!=NULL && rightHeadList!=NULL){
//             if(leftHeadList->val != rightHeadList->val){
//                 return false;
//             }else{
//                 leftHeadList = leftHeadList->next;
//                 rightHeadList = rightHeadList->next;
//             }
//         }
//         return true;
//     }
    

//     bool isPalindrome(ListNode* head) {

//     //    break list into two halves using middle node
//         ListNode* midNode = middleNode(head); 
//         ListNode* headRightList = midNode->next;

//     //  reverse the right list
//         headRightList = reverseList(headRightList);

//     //compare left list and reverse right list
//         bool ans = compareList(head,headRightList);
//         return ans;

//         //tc -> O(n)
//         //sc -> O(1)
//     }
// };