#include<iostream>

using namespace std;

void doubleElementOfArray(int arr[],int n,int index){
   if(index>=n){
    return ;
   } 
   arr[index]*=2;
   doubleElementOfArray(arr,n,index+1);
}

// TC ->O(n)
// SC ->O(n)

int main(){

    int arr[]={10,11,12,13,14};
    int n = 5;
    int index=0;
    doubleElementOfArray(arr,n,index);
    for(auto ele : arr){
        cout<<ele<<" ";
    }
    return 0;
}
