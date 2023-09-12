// Right Shift Element By 1 Position in an array

#include<iostream>

using namespace std;

//i/p -> 10,20,30,40
//o/p -> 40,10,20,30

void rightShiftArrayByOnePosition(int arr[],int size){

    //first store last element in temp variable
    //loop start with size - 1 and run till 1
    //arr[i]=arr[i-1]
    // then after loop arr[0]=temp

    int temp = arr[size-1];
    for(int i=size-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}

void printArray(int arr[],int size){
    cout<<"Printing array:\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {10,20,30,40,50,60,70};
    int size = 7;
    printArray(arr,size);

    cout<<"After right shift by 1 position:\n";
    rightShiftArrayByOnePosition(arr,size);

    printArray(arr,size);
    return 0;

}