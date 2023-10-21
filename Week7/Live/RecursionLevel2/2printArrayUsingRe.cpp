#include<iostream>

using namespace std;

void printArray(int a[],int n,int index){
    if(index>=n){
        return;
    }
    cout<<a[index]<<" ";
    printArray(a,n,index+1); //tail recursion
}

void printArrayInReverse(int a[],int n,int index){
     if(index>=n){
        return;
    }
    printArrayInReverse(a,n,index+1); //head recursion
    cout<<a[index]<<" ";
}

// TC ->O(n)
// SC ->O(n) for both

int main(){

    int a[]={10,-1,12,13,122};
    int n = 5;
    int index = 0;
    printArray(a,n,index);
    cout<<endl;
    printArrayInReverse(a,n,index);
    return 0;
}