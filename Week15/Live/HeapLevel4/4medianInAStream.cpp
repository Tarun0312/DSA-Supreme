#include<iostream>
#include<queue>

using namespace std;

void medianInAStream(double & median,priority_queue<int>& maxHeap,priority_queue<int,vector<int>,greater<int> >& minHeap,int element){

    if(maxHeap.size()==minHeap.size()){
        if(element>median){
            minHeap.push(element);
            median = minHeap.top();
        }else{
            maxHeap.push(element);
            median = maxHeap.top();
        }   
    }else if(maxHeap.size()==minHeap.size()+1){
        if(element>median){
            minHeap.push(element);
        }else{
            int maxTop = maxHeap.top();
            maxHeap.pop();
            minHeap.push(maxTop);
            maxHeap.push(element);
        }
        median = (maxHeap.top()+minHeap.top())/2.0;
    }else if(minHeap.size()==maxHeap.size()+1){
        if(element>median){
            int minTop = minHeap.top();
            minHeap.pop();
            maxHeap.push(minTop);
            minHeap.push(element);
        }else{
            maxHeap.push(element);
        }
        median = (maxHeap.top()+minHeap.top())/2.0;
    }
}
int main(){

    int arr[] = {12,10,8,4,2,3,15};
    int n = 7;

    priority_queue<int> maxHeap;
    priority_queue<int,vector<int>,greater<int> > minHeap;
    // 12  -> 12
    // 10 12 -> 11
    // 8 10 12 -> 10
    // 4 8 10 12 -> 9
    // 2 4 8 10 12 -> 8
    // 2 3 4 8 10 12 -> 6
    // 2 3 4 8 10 12 15 -> 8
    double median = 0;
    for(int i=0;i<n;i++){
        int element = arr[i];
        medianInAStream(median,maxHeap,minHeap,element);
        cout<<median<<" ";
    }

    return 0;
}