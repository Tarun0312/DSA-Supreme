#include<iostream>


using namespace std;

//stack implementation using arrays

//common mistake-> do not think about underflow and overflow cases

class Stack{

    public:
        int* arr;
        int top;
        int size;

        Stack(int size){
            arr = new int[size];
            this->top = -1;
            this->size = size;
        }

        void push(int data){
            if(top == size-1){
                cout<<"Stack Overflow"<<endl;
                return;
            }
            top++;
            arr[top]=data;
        }

        void pop(){
            //remove top element
            if(top==-1){
                cout<<"Stack Underflow"<<endl;
                return;
            }
            top--;
        }

        bool isEmpty(){
            if(top==-1){
                return 1;
            }
            return 0;
        }

        int getSize(){
            //no. of elements in stack
            return top+1;
        }

        int getTop(){
            if(top==-1){
                cout<<"Stack is empty\n";
                return -1;
            }
            return arr[top];
        }

        //print function only for understanding

        void print(){
            cout<<"Top : "<<top<<endl;
            cout<<"Top Element : "<<getTop()<<endl;
            cout<<"Stack : ";
            for(int i=0;i<getSize();i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl<<endl;
        }

};


int main(){

    Stack st(5);

    st.push(10);
    st.print();

    st.push(20);
    st.print();

    st.push(30);
    st.print();

    st.push(40);
    st.print();

    st.push(50);
    st.print();

    st.push(50);//stack overflow
    st.print();

    cout<<"Top element is "<<st.getTop()<<endl;
    st.pop();
    st.print();

    st.pop();
    st.print();

    st.pop();
    st.print();

    st.pop();
    st.print();

    st.pop();
    st.print();

    st.pop();
    st.print();

    if(st.isEmpty()){
        cout<<"stack is empty\n";
    }else{
        cout<<"stack is not empty\n";
    }

    cout<<"Size of stack is "<<st.getSize()<<endl;
  
    return 0;
}