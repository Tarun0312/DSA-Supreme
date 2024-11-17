#include<iostream>

using namespace std;

bool checkArrayIsSorted(int a[],int size,int index){
    if(index>=size) return true;

    if(a[index]>a[index-1]){
        //1 case sambhal liya baaki recursion dekh lega
        bool ans = checkArrayIsSorted(a,size,index+1);
        return ans;
    }else{
        //iska matalab sorted nhi hai
        return false;
    }
}
// Tc -> O(n)
// SC ->O(n)



int main(){

    int a[] = {12,22,34,85,89};
    int n = 5;
    int index = 1;
    bool isSorted = checkArrayIsSorted(a,n,index);
    if(isSorted){
        cout<<"Array is sorted";
    }else{
        cout<<"Array is not sorted";
    }

    return 0;
}