// https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab


//{ Driver Code Starts
// driver code

// #include<iostream>
// using namespace std;

// struct Node
// {
//     int data;
//     Node* next;
    
//     Node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// void loopHere(Node* head, Node* tail, int position)
// {
//     if(position==0) return;
    
//     Node* walk = head;
//     for(int i=1; i<position; i++)
//         walk = walk->next;
//     tail->next = walk;
// }

// bool isLoop(Node* head)
// {
//     if(!head) return false;
    
//     Node* fast = head->next;
//     Node* slow = head;
    
//     while( fast != slow)
//     {
//         if( !fast || !fast->next ) return false;
//         fast=fast->next->next;
//         slow=slow->next;
//     }
    
//     return true;
// }

// int length(Node* head)
// {
//     int ret = 0;
//     while(head)
//     {
//         ret++;
//         head = head->next;
//     }
//     return ret;
// }

// bool notOriginal(Node *head, unordered_map<Node *, int>&myMap){
    
//     while(head){
//         if(myMap.find(head)==myMap.end()) return true;
//         if(myMap[head] != (head->data)) return true;
        
//         head=head->next;
//     }
// }




// // } Driver Code Ends
// /*
// structure of linked list node:

// struct Node
// {
//     int data;
//     Node* next;
    
//     Node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// */

// class Solution
// {
//     public:
//     //Function to remove a loop in the linked list.
//     void removeLoop(Node* head)
//     {
//         // code here
//         // just remove the loop without losing any nodes
        
//        //step1:  detect loop using slow and fast algorithm
//        Node* fast = head;
//        Node* slow = head;
       
//        while(fast != NULL){
//            fast = fast->next;
//            if(fast!=NULL){
//                fast = fast->next;
//                //fast 2 step aage bd chuka hai
//                //now slow 1 step aage bdega
//                slow = slow->next;
//            }
           
//            if(fast == NULL){
//                //no cycle detected
//                return;
//            }
           
//            if(slow == fast){
//                //cycle detected
//                break;
//            }
//        }
       
//     // step2:  find starting point of cycle
//             slow = head;
//             // ab slow and fast 1-1 step aage bdenge jb tk slow==fast nhi
//             //hota jb slow==fast hoga it means starting point of loop mil gya
            
//             while(slow!=fast){
//                 slow=slow->next;
//                 fast = fast->next;
//             }
            
//             //ab slow and fast pointer starting point of loop pr point kr rhe hai
            
//             // step3 : remove loop
//             //starting point se pehle waali node ke next mei NULL kr do loop remove 
//             //ho jaayega
            
//             Node* startingPoint = slow;
            
//             while(fast->next != startingPoint){
//                 fast = fast->next;
//             }
//             fast->next = NULL;//loop remove
//     }
// };

// //{ Driver Code Starts.

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         unordered_map<Node *, int>myMap;
        
//         int n, num;
//         cin>>n;
        
//         Node *head, *tail;
//         cin>> num;
//         head = tail = new Node(num);
        
//         myMap[head]=num;
        
//         for(int i=0 ; i<n-1 ; i++)
//         {
//             cin>> num;
//             tail->next = new Node(num);
//             tail = tail->next;
//             myMap[tail]=num;
//         }
        
//         int pos;
//         cin>> pos;
//         loopHere(head,tail,pos);
        
//         Solution ob;
//         ob.removeLoop(head);
        
//         if( isLoop(head) || length(head)!=n || notOriginal(head, myMap))
//             cout<<"0\n";
//         else
//             cout<<"1\n";
//     }
// 	return 0;
// }

// // } Driver Code Ends