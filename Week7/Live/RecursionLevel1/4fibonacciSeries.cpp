#include<iostream>

using namespace std;

//find nth term of fibonacci
// 0 1 1 2 3 5 8 13 21 ....

int fib(int n){
    // here first term is started from O
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int fib(int n){
    // here first term is started from 1
    if(n==1 || n==2){
        return n-1;
    }
    return fib(n-1)+fib(n-2);
}
// TC ->O(2^n)
// SC ->O(n)

int main(){

    int n = 9;
    cout<<fib(n);

    return 0;
}