#include<iostream>
#include<queue>
using namespace std;


int kthlargestInArray(int* arr,int n,int k){
    // step1:store first k elements in maxheap
    priority_queue<int,vector<int>,greater<int>> pq;

    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }


    //step2: push remaining elements of array in max if arr[i] < pq.top() and pop the root

    for(int i=k;i<n;i++){
        if(arr[i]>pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }

    int ans = pq.top();
    return ans;
}


int main(){

    int arr[] = {12,3,4,5,6,7};
    int k = 3;
    int n = 6;
    int ans = kthlargestInArray(arr,n,k);
    cout<<k<<" largest in array is : "<<ans;

    return 0;
}