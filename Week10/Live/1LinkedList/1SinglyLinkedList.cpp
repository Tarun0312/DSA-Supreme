#include<iostream>

using namespace std;

// Singly linked list

class Node{
    public:
        int data;
        Node* next;

        Node(){
            // cout<<"I am inside default constructor";
            this->next = NULL;
        }

        Node(int data){
            // cout<<"I am inside parameterised constructor";
            this->data = data;
            this->next = NULL;
        }
};

//print a linked list
void printLL(Node* head){
//best practice to not use formal arguments in case of linked list
Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

// print a length of linked list==print length of total nodes

int lengthLL(Node* head){
    Node* temp = head;
    int countNode=0;
    while(temp){
        countNode++;
        temp = temp->next;
    }

    return countNode;
}

int main(){

    // Node a;//static object
    // Node a(10);//static object

    //dynamic object
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;

    //linked list bn chuki hai
    Node* head = first;

    printLL(head);

    cout<<"Length of linked list is: "<< lengthLL(head);


    return 0;
}