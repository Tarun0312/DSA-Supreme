#include<iostream>

using namespace std;

class CircularDeque{
    public:
        int* arr;
        int size;
        int front;
        int rear;

        CircularDeque(int size){
            this->arr = new int[size];
            this->size = size;
            front=rear=-1;
        }

        void push_back(int data){
            //overflow
            //empty deque -> first push
            //circular nature
            //normal case

            if((front==0 && rear==size-1) || (rear+1==front)){
                cout<<"Deque Overflow "<<endl;
            }else if(front==-1 && rear==-1){
                front++,rear++;
                arr[rear] = data;
            }else if(rear==size-1 && front !=0){
                rear=0;
                arr[rear] = data;
            }else{
                rear++;
                arr[rear] = data;
            }
        }

        void push_front(int data){
            //overflow
            //empty deque -> first push
            //circular nature
            //normal case

            if((front==0 && rear==size-1) || (rear+1==front)){
                //2nd condition bhul gya gya tha
                cout<<"Overflow "<<endl;
            }else if(front==-1 && rear==-1){
                front++,rear++;
                arr[front] = data;
            }else if(front==0 && rear!=size-1){
                //galti kroge isme pakka
                front = size-1;
                arr[front] = data;
            }else{
                front--;
                arr[front] = data;
            }
        }


        void pop_front(){
            //underflow
            //single element pop
            //circular nature
            //normal case

            if(front==-1 && rear==-1){
                cout<<"Deque Underflow "<<endl;
            }else if(front==rear){
                arr[front] = -1;
                front=-1,rear=-1;
            }else if(front==size-1){
                //galti kroge isme
               arr[front]=-1;
               front = 0;
            }else{
                arr[front] = -1;
                front++;
            }
        }

        void pop_back(){
            //underflow
            //single element pop
            //circular nature
            //normal case

            if(front==-1 && rear==-1){
                cout<<"Deque Underflow "<<endl;
            }else if(front==rear){
                arr[rear] = -1;
                front=-1,rear=-1;
            }else if(rear==0){
                arr[rear]=-1;
                rear=size-1;
            }else{
                arr[rear]=-1;
                rear--;
            }
        }    
        int getFront(){
            if(front==-1){
                cout<<"No elements in queue\n";
                return -1;
            }else{
                return arr[front];
            }
        }

        int getBack(){
            if(rear==-1){
                cout<<"No elements in queue\n";
                return -1;
            }else{
                return arr[rear];
            }
        }

   

};

//all operations in queue takes O(1) TC

int main(){

    CircularDeque cd(4);

    cd.push_front(10);
    cd.push_front(20);
    cd.push_front(30);

    cd.push_back(1);
    cd.push_front(4);
    cout<<"Front Element is "<<cd.getFront()<<endl;
    cout<<"Back element is "<<cd.getBack()<<endl;

    cd.pop_back();
    cd.pop_front();

    cout<<"Front Element is "<<cd.getFront()<<endl;
    cout<<"Back element is "<<cd.getBack()<<endl;

    cd.push_front(1);
    cout<<"Front Element is "<<cd.getFront()<<endl;
    cout<<"Back element is "<<cd.getBack()<<endl;

    cd.pop_back();
    cd.pop_back();
    cout<<"Front Element is "<<cd.getFront()<<endl;
    cout<<"Back element is "<<cd.getBack()<<endl;
    cd.pop_back();
    cout<<"Front Element is "<<cd.getFront()<<endl;
    cout<<"Back element is "<<cd.getBack()<<endl;
    cd.pop_back();

    //circular nature prove
    cd.push_front(12);
    cd.push_back(1);
    cd.push_back(3);
    cd.push_back(7);
    cout<<"Front Element is "<<cd.getFront()<<endl;
    cout<<"Back element is "<<cd.getBack()<<endl;
    cd.pop_front();
    cd.push_back(0);
    cout<<"Front Element is "<<cd.getFront()<<endl;
    cout<<"Back element is "<<cd.getBack()<<endl;
    return 0;
}