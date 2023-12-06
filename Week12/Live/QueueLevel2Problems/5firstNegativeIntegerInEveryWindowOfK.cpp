#include<iostream>
#include<queue>
using namespace std;

void firstNegativeIntegerInWindowK(int* arr,int size,int k){

    queue<int> q;
    //process first k element - first window
    //find negative intger for first window
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            //store index of negative number in queue so that we can check the range of window in next window
            q.push(i);
        }
    }

    //process remaining windows - removal
    for(int index=k;index<size;index++){
        //aage badhne se pehle puraani window ka answer strore kro
        if(q.empty()){
            cout<<"0"<<" ";
        }else{
            cout<<arr[q.front()]<<" ";
        }
        
        //removal - jo bhi index out of range hai use remove kro
        if(index-q.front() >=k){
            q.pop();
        }
        
        //addition
        if(arr[index]<0){
            q.push(index);
        } 

    }

    //process last window
    if(q.empty()){
            cout<<"0"<<" ";
        }else{
            cout<<arr[q.front()]<<" ";
    }
}
//tc -> O(n)
//sc-. O(n) queue


int main(){

    int arr[7] = {2,-5,4,-1,-2,0,5};
    int size = 7;
    int k=3;
    firstNegativeIntegerInWindowK(arr,size,k);
    return 0;
}