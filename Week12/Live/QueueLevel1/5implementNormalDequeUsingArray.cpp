#include<iostream>

using namespace std;


//kuda hai yeh code bcoz front mei bs 1 baar hi kr paayenge
//use circular deque
class Deque{
    public :
        int* arr;
        int size;
        int front;
        int rear;
        Deque(int size){
            this->arr = new int[size];
            this->size = size;
            front=rear=-1;
        }

        void push_back(int data){
            //overflow
            //empty deque-> first push
            //normal case

            if(rear==size-1){
                cout<<"Deque Overflow\n"<<endl;
            }else if(front==-1 && rear==-1){
                front++,rear++;
                arr[rear] = data;
            }else{
                rear++;
                arr[rear] = data;
            }
        }

        void push_front(int data){
            //overflow
            //empty deque-> first push
            //normal case

            if(front==0){
                cout<<"Deque Overflow "<<endl;
            }else if(front==-1 && rear==-1){
                front++,rear++;
                arr[front] = data;
            }else{
                front--;
                arr[front] = data;
            }
        }

        void pop_front(){
            //underflow
            //single element
            //normal case

            if(front==-1 && rear==-1){
                cout<<"Deque Underflow "<<endl;
            }else if(front==rear){
                arr[front]=-1;
                front=-1,rear=-1;
            }else{
                arr[front] = -1;
                front++;
            }
        }

        void pop_back(){
            //underflow
            //single element
            //normal case

            if(front==-1 && rear==-1){
                cout<<"Underflow "<<endl;
            }else if(front==rear){
                arr[rear] = -1;
                front=-1,rear=-1;
            }else{
                arr[rear] = -1;
                rear--;
            }
        }

        int getSize(){
            if(front==-1 && rear==-1){
                return 0;
            }else{
                return rear-front+1;
            }
        }

        int getFront(){
            if(front==-1 && rear==-1){
                //empty deque
                return -1;
            }else{
                return arr[front];
            }
        }

        int getBack(){
            if(front==-1 && rear==-1){
                //empty deque
                return -1;
            }else{
                return arr[rear];
            }
        }

};



int main(){

    Deque dq(3);

    dq.push_back(10);
     //front element
    cout<<"Front element is "<<dq.getFront()<<endl;

    //back element
    cout<<"Back element is "<<dq.getBack()<<endl;

    dq.push_back(20); 
     //front element
    cout<<"Front element is "<<dq.getFront()<<endl;

    //back element
    cout<<"Back element is "<<dq.getBack()<<endl;

    dq.push_front(20); 

    return 0;
}