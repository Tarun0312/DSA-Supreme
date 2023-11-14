#include<iostream>

using namespace std;

class ListNode{
    public :
    int data;
    ListNode* next;
};

int getLength(ListNode* head){
    ListNode* temp = head;
    int len = 0;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        ///base case

            if(head==NULL){
                //empty list
                return head;
            }
            if(head->next==NULL){
                //single element,no reverse
                return head;
            }


            ListNode* prev = NULL;
            ListNode* curr = head;
            int pos=0;
            ListNode* nextNode=curr->next;

            if(k > getLength(head)){
                return head;
            }

            while(pos<k){
                //1 node reverse hogi iss code se
                //humei 2node reveerse krni ,we can use loop
                nextNode = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nextNode;
                pos++;
            }

        //baaki recursion dekh lega
        ListNode* recursionAns = NULL;
        if(nextNode != NULL){
            recursionAns=reverseKGroup(nextNode,k);
            head->next = recursionAns;
        }
        
        return prev;
    }
    
