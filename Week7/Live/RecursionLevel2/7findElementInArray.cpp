#include<iostream>

using namespace std;

int linearSearch(int a[],int n,int index,int target){
    if(index>=n) return -1;
    if(a[index]==target) return index;

    int ans = linearSearch(a,n,++index,target);
    return ans;
}
// TC -> O(n)
// SC -> O(n)


int main(){

    int a[] = {12,1,2,90,76,32};
    int n = 6;
    int index = 0;
    int target = 1;
    cout<<linearSearch(a,n,index,target);

    return 0;
}