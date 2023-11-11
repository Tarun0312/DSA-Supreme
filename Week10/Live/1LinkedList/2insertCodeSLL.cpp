#include<iostream>

using namespace std;

//singly linked list (sll)

class Node{

public:
    int data;
    Node* next;

    Node(){
        this->next=NULL;
    }

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~Node(){
        cout<<"Destructor called for "<<this->data<<endl;
    }
};

void printLL(Node* head){
    Node* temp = head;

    while(temp){
        cout<<temp->data<<" ->";
        temp=temp->next;
    }
    cout<<endl;
}

int getLengthOfLL(Node* head){
    Node* temp = head;
    int countNodes=0;
    while(temp){
        countNodes++;
        temp=temp->next;
    }

    return countNodes;
}

void findTail(Node* &head,Node* &tail){
    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    // temp->next mei null aa gya iska matlab
    // temp last node ko point kr rha hai jo ki tail hai
    tail = temp;
}






//Insert At Head

void insertAtHead(Node* &head,Node* &tail,int data){

    if(head==NULL){
        //LL empty

        //Step1 : Create a new node
        Node* newNode = new Node(data);

        //Step2 : update head and tail
        head = newNode;
        tail = newNode;

    }else{
        //LL not empty

        // Step1 : Create a new node
        Node* newNode = new Node(data);

        //Step2 : Attach head to new node
        newNode->next = head;

        //Step3: Update head
        head = newNode; 
    }
}

//Insert at tail

void insertAtTail(Node* &head,Node* &tail,int data){

    if(head==NULL){
        //ll empty
        
        //Step1 : Create a new node
        Node* newNode = new Node(data);

        //Step2: update head and tail
        head = newNode;
        tail = newNode;
    }else{
        //ll not empty

        //Step1 : Create a new node
        Node* newNode = new Node(data);

        //Step2 : Attach new node to tail
        tail->next = newNode;

        //Step3 : update tail
        tail = newNode;
    }
}


//insert at middle(nth position) of linked list

void insertAtMiddle(Node* &head,Node* &tail,int data,int position){
    //position<1 && position > lengthOfLL

    int length = getLengthOfLL(head);

    if(position<=1){
        //insertAtHead
        insertAtHead(head,tail,data);
    }else if(position>length){
        //insertAtTail
        insertAtTail(head,tail,data);
    }else{
    //     //insert at middle of linked list

    //     //Step1 : Create a new node
    //     Node* newNode = new Node(data);

    //     //Step2 : Traverse prev/curr to position
    //     //here 2 pointers current and prev are used but we can insert at middle using 1 prev only
    //     Node* prev = NULL;
    //     Node* curr = head;
        
    //     while(position!=1){
    //         position--;
    //         prev = curr;
    //         curr = curr->next;
    //     }

    //     //step3 : attach prev to new node
    //     prev->next = newNode;

    //     //step4 : attach newNode to current
    //     newNode->next = curr;

    //insert at middle of linked list using 1 ptr

    Node* newNode = new Node(data);

    Node* prev = head;

    while(position!=2){
        prev = prev->next;
        position--;
    }
    newNode->next = prev->next;
    prev->next = newNode;

    }
    

}

//TC (insertion/shift) = O(1) for insertion at head else insertion at other location including tail(agr tail ptr nhi hoga tb toh Linked list lo traverse krna pdega) tc = O(n)





// Deletion of node from LL on the basis of position

void deleletNode(Node* &head,Node* &tail,int position){
    //assume position is in valid range(1<=pos<=lengthOfLL)

    //LL empty
    if(head == NULL){
        cout<<"Can't delete a node from empty linked list,enter valid position";
        return;
    }


    //single element in LL
    if(head->next==NULL){
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }

    int length = getLengthOfLL(head);

    if(position==1){
        //deletion of node from head

        Node* temp = head;

        //update head
        head = head->next;

        //isolate the node
        temp->next = NULL;

        delete temp;

    }else if(position == length){
        //deletion of node from tail

        //Step1: find prev
        Node* prev = head;
        //run this loop till second last node
        while(prev->next != tail){
            prev = prev->next;
        }

        //Step2 : isolate second last node
        prev->next = NULL;

        //Step3 : delete last node(tail)
        delete tail;

        //Step4 : update tail
        tail = prev;


    }else{
        //middle of ll se delete kro

        // Step1 : traverse prev/curr to position
        Node* prev = NULL;
        Node* curr = head;
        while(position!=1){
            prev = curr;
            curr = curr->next;
            position--;
        }

        //Step2 : prev->next = curr->next
        prev->next = curr->next;

        //step3 : Isolate the current node
        curr->next = NULL;

        //step4 : delete the current node
        delete curr;
    }
}


//tc -> O(1) for insertion/deletion from head else O(n) for insertion/deletion from other position
// tc = O(n) bcoz of traversal 

//sc -> O(1)




int main(){

    Node* head = NULL;
    Node* tail = NULL;

    {
        // insertAtHead(head,tail,20);
        // insertAtHead(head,tail,10);
        // insertAtHead(head,tail,30);

        // printLL(head);
    }

    {
        // insertAtHead(head,tail,20);
        // insertAtHead(head,tail,10);
        // insertAtHead(head,tail,30);
        // insertAtTail(head,tail,40);
        // insertAtTail(head,tail,3);

        // printLL(head);
    }

    // {
    //     insertAtHead(head,tail,20);
    //     insertAtHead(head,tail,10);
    //     insertAtTail(head,tail,40);
    //     insertAtMiddle(head,tail,90,2); //10 90 20 40
    //     insertAtMiddle(head,tail,23,-1); // 23 10 90 20 40
    //     insertAtMiddle(head,tail,8,3);// 23 10 8 90 20 40
    //     insertAtMiddle(head,tail,60,2);//23 60 10 8 90 20 40


    //     printLL(head);
    // }

        {
            insertAtHead(head,tail,50);
            // insertAtHead(head,tail,40);
            // insertAtHead(head,tail,30);
            // insertAtHead(head,tail,20);
            // insertAtHead(head,tail,10);

        //delete from head
            // printLL(head);
            // deleletNode(head,tail,1);
            // printLL(head);


        //delete from tail
            // printLL(head);
            // deleletNode(head,tail,5);
            // printLL(head);
        
        //delete from middle
            // printLL(head);
            // deleletNode(head,tail,4);
            // printLL(head);

        //delete from head
            printLL(head);
            deleletNode(head,tail,1);
            printLL(head);

        //delete from empty ll
            printLL(head);
            deleletNode(head,tail,1);
            printLL(head);
        }


    return 0;
}