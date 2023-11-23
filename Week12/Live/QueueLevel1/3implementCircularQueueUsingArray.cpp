#include<iostream>

using namespace std;

class CircularQueue{
    public:
        int* arr;
        int size;
        int front;
        int rear;
        CircularQueue(int size){
            this->arr = new int[size];
            this->size = size;
            front=rear=-1;
        }
        void push(int data){
            //overflow
            //queue empty
            //circular nature
            //normal case
            // eg of 2nd overflow condition if we not write then this will happen
            // 2 -1 3 (front = 2(index) rear=0(index))
            //push(5)
            // 2 5 3 (front = 2(index) rear=1(index))
            //push(6)
            // 2 5 6 (front = 2(index) rear=2(index))
            if((front==0 && rear==size-1) || (rear+1==front)){
                //bhul jaate hai condition second waali
                cout<<"Overflow "<<endl;
            }else if(front==-1 && rear==-1){
                //bhul jaate hai
                front++,rear++;
                arr[rear] = data;
            }else if(rear==size-1 && front!=0){
                 //circular nature
                rear=0;
                arr[rear] = data;
            }else{
                rear++;
                arr[rear] = data;
            }
        }

        void pop(){
            //underflow
            //single element pop
            //circular nature
            //normal case

            if(front == -1 && rear==-1){
                cout<<"Underflow "<<endl;
            }else if(front==rear){
                //bhul jaate hai
                arr[front] = -1;
                front=-1;
                rear=-1;
            }else if(front == size-1){
                //circular nature
                arr[front] = -1;
                front=0;
            }else{
                arr[front] = -1;
                front++;
            }
        }

        int getFront(){
            if(front == -1 && rear==-1){
                cout<<"Queue is empty "<<endl;
                return -1;
            }else{
               return arr[front];
            }
        }

        int getSize(){
            if(front == -1 && rear==-1){
                return 0;
            }else{
                return rear-front+1;
            }
        }

        bool isEmpty(){
            if(front == -1 && rear==-1){
                return true;
            }else{
                return false;
            }
        }

        void print(){
        cout<<"Front element : "<<this->getFront()<<endl;
        cout<<"Queue : ";
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl<<endl;
    }

};

//all operations tc -> O(1)

int main(){

    CircularQueue cq(3);
    cq.print();

    cq.push(5);
    cq.print();
    cout<<"Size of queue is "<<cq.getSize()<<endl;

    cq.push(10);
    cq.print();
    cq.pop();

    cq.push(15);
    cq.print();
    
    cq.push(20);
    cq.print();

    cq.push(30); //overflow due to (rear+1==front) this condition
    cq.print();

    cq.pop();
    cq.print();

    cq.pop();
    cq.print();

    cq.push(4);
    cq.print();

    cq.push(8);
    cq.print();
    

    cq.push(10); //overflow due to first condition of overflow
    cq.print();


    cq.pop();
    cq.print();

    cq.pop();
    cq.print();
    cout<<"Size is "<<cq.getSize()<<endl;
    cq.pop();
    cq.print();
    

    cq.pop();

    cout<<"Size is "<<cq.getSize()<<endl;
    return 0;
}