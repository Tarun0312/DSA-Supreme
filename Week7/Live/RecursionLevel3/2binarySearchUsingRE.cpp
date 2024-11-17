#include<iostream>

using namespace std;

int binarySearch(int arr[],int start,int end,int target){
    if(start>end){
        //element not found
         return -1;
    }

    //processing
    int mid = start + (end-start)/2;

    if(arr[mid]==target){
        return mid;
    }else if(arr[mid]>target){
        //left jao
       return binarySearch(arr,start,mid-1,target);
    }else{
        //right jao
      return  binarySearch(arr,mid+1,end,target);
    }
}
// TC ->O(logn)
// SC ->O(logn)

int main(){

    int arr[] = {10,20,30,40,50,55,60};
    int start = 0;
    int end = 6;
    int target = 510;
    int targetIndex=binarySearch(arr,start,end,target);
    cout<<"Target found at index "<<targetIndex;

    return 0;
}