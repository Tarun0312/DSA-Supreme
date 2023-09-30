#include<iostream>

using namespace std;

int linearSearch(int arr[],int size,int target){

    for(int i=0;i<size;i++){
        if(target ==  arr[i]){
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[],int size,int target){

    int start = 0;
    int end = size - 1;
    // int mid = (start + end)/2;
    int mid = start + (end-start)/2;//best practice to avod overflow


    int ans ;
    while(start <= end){
        if(arr[mid]==target){
            // return index of the found element
            return mid;
        }
        else if(target > arr[mid])
        {
            // right mei jao
            start = mid+1;
        }
        else if(target < arr[mid]){
            // left mei jao
            end = mid - 1;
        }
        //galti krunga
        mid = (start + end )/2;
    }
    // agar yahan tak pahuche ho toh
    // if element not found
    return -1;

    // return ans ;
}



//
int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int size=7,target=70;
    // cout<<"Element found at index "<<binarySearch(arr,size,target);

    // INT_MAX -> 2147483647
    // INT_MAX/2 -> 1073741823
    // 2147483647 + 2147483647 => 429496724/2 =2147483647
    //but numerator integer ki range se overflow ho chuka hai toh answer wrong aayega
    int mid = INT_MAX/2 + INT_MAX/2;//best practice no numerator overflow  //2147483646
    int mid1 = INT_MAX + (INT_MAX-INT_MAX)/2; //2147483647 //more better practice
    cout<<mid<<" "<<mid1;
}

