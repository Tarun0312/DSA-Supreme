#include<iostream>

using namespace std;

//doubly linked list where each node consists of prev ptr,data,next ptr

class Node{
    public:
        Node* prev;
        int data;
        Node* next;

        Node(){
            this->prev = NULL;
            this->next = NULL;
        }

        Node(int data){
            this->prev = NULL;
            this->data = data;
            this->next = NULL;
        }

        ~Node(){
            cout<<"Destructor called for "<<this->data<<endl;
        }
};


void printLL(Node* head){
    Node* temp = head;

    while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
    }

    cout<<endl;
}

int findLengthOfLL(Node* &head){
    Node* temp = head;
    int countNodes = 0;

    while(temp){
        countNodes++;
        temp = temp->next;
    }

    return countNodes;

}



// insertion at head
void insertAtHead(Node* &head,Node* &tail,int data){

    if(head==NULL){
        //LL is empty

        //step1 : create a new node
        Node* newNode = new Node(data);

        //step2 :update head and tail
        head = tail = newNode;

    }else{
        //LL is not empty

        //Step 1 : Create a new node
        Node* newNode = new Node(data);

        //step2 : Attach new node to head
        newNode->next = head;

        //step3 : head->prev to new node
        head->prev = newNode;

        //step4 : update head
        head = newNode;
    }

}




// insertion at tail
void insertAtTail(Node* &head,Node* &tail,int data){

    //LL is empty 
    if(head == NULL){
        
        //step1 : create a new node
        Node* newNode = new Node(data);

        //step2 :update head and tail
        head = newNode;
        tail = newNode;
    }else{
        // LL is not empty

        //step1 : create a new node
        Node* newNode = new Node(data);

        //step2 : attach newNode->prev to tail
        newNode->prev = tail;

        //step3 : attach tail to newNode
        tail->next = newNode;

        //step4 : update tail
        tail = newNode;
    }
}

//insert at N position of Linked list

void insertAtMiddle(Node* &head,Node* &tail,int data,int position){

    //ll empty
    if(head == NULL){
        Node* newNode = new Node(data);

        //update head and tail
        head = newNode;
        tail = newNode;
    }else{

        // ll is  not empty

        //step 1: create a new Node
        Node* newNode = new Node(data);
        
        //step 2: traverse prevNode,currNode,nextNode to position
        Node* prevNode = NULL;
        Node* currNode = head;

        while(position!=1){
            prevNode = currNode;
            currNode = currNode->next;
            position--;
        }

        //step 3 :prevNode->next = newNode
        prevNode->next = newNode;

        //step 4: attach newNode->prev to prevNode
        newNode->prev = prevNode;

        //step 5: attach newNode->next to currNode
        newNode->next = currNode;

        //step6 : attach currNode->prev to newNode
        currNode->prev = newNode;

    }
}

//TC ->O(n)


//deletion of node from ll

void deleteNode(Node* &head,Node* &tail,int position){

    //assume 1<=position<=length+1

    //Linked list is empty
    if(head==NULL){
        cout<<"can't insert a node in linked list,enter a valid position"<<endl;
        return;
    }

    //single element in ll
    if(head==tail){

        Node* temp = head;
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }

    int length = findLengthOfLL(head);

    //deletion from head
    if(position==1){
        Node* temp = head;
        head = head->next;
        head->prev = NULL;

        //isolate a node
        temp->next = NULL;

        delete temp;

    }else if(position == length){
        //deletion of node from tail

        Node* prevNode = tail->prev;
        prevNode->next = NULL;

        //isolate last node
        tail->prev = NULL;

        //delete 
        delete tail;
        
        //update tail
        tail = prevNode;
    }else{
        //deletion from middle of ll

        //step 1 : set prevNode,currNode,nextNode
        Node* prevNode = NULL;
        Node* currNode = head;
        while(position!=1){
            prevNode = currNode;
            currNode = currNode->next;
            position--;
        }
        Node* nextNode = currNode->next;

        //step 2: prevNode->next = nextNode
        prevNode->next = nextNode;

        //step3: isolate currentNode
        currNode->prev = NULL;
        currNode->next = NULL;

        //step4 :delete currNode
        delete currNode;

        //step5: nextNode->prev = prevNode
        nextNode->prev = prevNode;
    }

}

//tc -> insertion or deletion at head or tail is O(1)
    //in middle it takes O(n) in DLL
//sc -> O(1)


int main(){

    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head,tail,10);
    insertAtHead(head,tail,20);
    insertAtTail(head,tail,1);
    insertAtHead(head,tail,50);//50 20 10 1
    insertAtMiddle(head,tail,9,3);//50 20 9 10 1
    insertAtMiddle(head,tail,2,2);//50 2 20 9 10 1 

    deleteNode(head,tail,1);
    // printLL(head);

    deleteNode(head,tail,2);
    deleteNode(head,tail,1);
    deleteNode(head,tail,2);
    deleteNode(head,tail,2);
    deleteNode(head,tail,1);
    deleteNode(head,tail,1);
    printLL(head);
    return 0;
}