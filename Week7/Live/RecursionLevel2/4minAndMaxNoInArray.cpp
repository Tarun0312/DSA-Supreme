#include<iostream>

using namespace std;

void findMinInArray(int a[],int n,int index,int& mini){
    if(index>=n){
        return ;
    }
    mini = min(a[index],mini);
    findMinInArray(a,n,index+1,mini);
}

void findMaxInArray(int a[],int n,int index,int& maxi){
    if(index>=n) return ;
    maxi = max(maxi,a[index]);
    findMaxInArray(a,n,index+1,maxi);
}
//TC ->O(n)
//SC ->O(n) for both
int main(){
    int a[] = {120,1,0,900,1102,112};
    int n = 6;
    int index = 0;
    int min = INT_MAX;
    int max = INT_MIN;
    findMinInArray(a,n,index,min);
    findMaxInArray(a,n,index,max);
    cout<<min<<endl;
    cout<<max;
    return 0;
}