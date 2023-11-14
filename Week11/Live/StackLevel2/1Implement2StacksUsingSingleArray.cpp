#include<iostream>

using namespace std;

// Implement 2 Stacks Using Single Array

class Stack{
    public : 
        int* arr;
        int size;
        int top1;
        int top2;

        Stack(int size){
            arr = new int[size];
            this->size = size;
            this->top1 = -1;
            this->top2 = size;
        }

        //push in stack1 
        void push1(int data){
            if(top2 - top1 == 1){
                cout<<"Overflow"<<endl;
            }else{
                top1++;
                arr[top1] = data;
            }
           
        }

        //push in stack2
        void push2(int data){
            if(top2 - top1 == 1){
                cout<<"OVERFLOW"<<endl;
            }
            else{
                top2--;
                arr[top2] = data;
            }
        
        }

        //pop in stack1
        void pop1(){
            if(top1 == -1){
                cout<<"UNDERFLOW"<<endl;
            }else{
                arr[top1] = 0;
                top1--;
            }
            
        }

        //pop in stack2
        void pop2(){
            if(top2 == size){
                cout<<"UNDERFLOW"<<endl;
            }else{
                arr[top2] = 0;
                top2++;
            }
            
        }

        //print stack only for understanding
        void print(){
            cout<<"Top1 : "<<top1<<endl;
            cout<<"Top2 : "<<top2<<endl;
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl<<endl;
        }

};



int main(){

    Stack st(5);

    st.push1(12);
    st.print();
    
    st.push1(4);
    st.print();

    st.push2(100);
    st.print();

    st.push2(200);
    st.print();

    st.push2(300);
    st.print();

    st.push2(300);//overflow

    st.pop1();
    st.print();

    st.pop1();
    st.print();

    st.pop1();//underflow
    return 0;
}