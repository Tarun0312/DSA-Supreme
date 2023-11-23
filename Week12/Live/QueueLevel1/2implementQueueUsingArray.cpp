#include<iostream>
using namespace std;

class Queue{
    public :
    int* arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        this->arr = new int[size];
        this->size = size;
        this->front = -1;
        this->rear = -1;
    }

    void push(int data){
        //Overflow
        //empty queue -> first element insertion
        //normal case
        if(rear == size-1){
            cout<<"Queue Overflow ";
            return;
        }else if(front==-1 && rear==-1){
            front++,rear++;
            arr[rear] = data;
        }else{
            rear++;
            arr[rear] = data;
        }

    }

    void pop(){
        //Underflow
        //single element pop
        //normal case

        if(front==-1 && rear == -1){
            cout<<"Queue underflow "<<endl;
            return;
        }else if(front==rear){
            // single element
            arr[front] = -1;
            front = -1;
            rear = -1;
        }else{
            arr[front] = -1;
            front++;
        }
    }

    int getFront(){
        //check underflow
        if(front==-1 && rear==-1){
            cout<<"Empty Queue "<<endl;
            return -1;
        }else{
            return arr[front];
        }  
    }

    int getSize(){
        if(front==-1 && rear==-1){
            return 0;
        }else{
            return rear-front+1;
        }
    }

    bool isEmpty(){
        if(front==-1 && rear==-1){
            return 1;
        }else{
            return 0;
        }
    }

    void print(){
        // cout<<"Front element : "<<this->getFront()<<endl;
        cout<<"Queue : ";
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl<<endl;
    }
};

//all operations tc -> O(1)

//disadavantage -> memory wastage bcoz insertion is from rear end
//if there is memory free in left side,still no insertion
//eg -1 -1 -1 40 
//use circular queue
int main(){

    Queue q(4);
    q.print();

    q.push(10);
    q.print();

    q.push(20);
    q.print();

    q.push(30);
    q.print();

    q.push(40);
    q.print();

    q.push(40);
    q.print();
    cout<<"Size is "<<q.getSize()<<endl;

    q.pop();
    q.print();

    q.pop();
    q.print();

    q.pop();
    q.print();
    cout<<"Front element is "<<q.getFront()<<endl;
    cout<<"Size is "<<q.getSize()<<endl;

    q.pop();
    cout<<"Size is "<<q.getSize()<<endl;
    q.print();

    q.pop();

    if(q.isEmpty()){
        cout<<"Queue is empty\n";
    }else{
        cout<<"Queue is not empty\n";
    }
    return 0;
}