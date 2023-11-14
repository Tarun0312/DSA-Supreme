// https://www.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1

//{ Driver Code Starts
//Initial template for C++

#include<iostream> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* reverseListIterativeApproach(Node* head){
        Node* prev = NULL;
        Node* curr = head;
        
        while(curr!=NULL){
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        
        head = prev;
        return head;
    }
    
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        
        // step1 : we have to access number from right to left but in ll we can access from
        // left to right ,so first reverse the linked list so that right to left access is 
        // possible.
          head = reverseListIterativeApproach(head);
        
        //step2 : traverse the linked list and add 1 to linked list
        Node* prev = NULL;
        Node* curr = head;
        int carry = 1;
        while(curr!=NULL){
            int totalSum = curr->data + carry;
            int digit = totalSum % 10;
            carry = totalSum/10;
          
            curr->data = digit;
            prev = curr;
            curr=curr->next;
            
            if(carry==0){
                //no carry need to ne added so end loop
                break;
            }
        }
        
        //if carry is remaining and linked list is finsihed ,in this case carry need to be
        // added in new node
        if(carry!=0){
            Node* newNode = new Node(carry);
            carry/=10;
            prev->next = newNode;//prev is pointing to the last node
        }
        
        //step3 : reverse the linked list
        head = reverseListIterativeApproach(head);
        return head;
        
        //tc -> O(n)
        //sc -> O(1)
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends