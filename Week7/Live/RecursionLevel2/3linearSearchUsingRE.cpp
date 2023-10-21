#include<iostream>

using namespace std;

bool linearSearchInArray(int a[],int n,int index,int target){
    if(index>=n){
        return false;
    }
    if(a[index]==target){
        return true;
    }
    bool ans = linearSearchInArray(a,n,index+1,target);
    return ans;
}
//TC -> O(n)
//SC -> O(n)

int main(){

    int a[] = {10,20,11,22,31};
    int n = 5;
    int index = 0;
    int target = 311;
    cout<<linearSearchInArray(a,n,index,target);

    return 0;
}