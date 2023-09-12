// Right Shift By K position

// Right Shift Element By K Position in an array

#include<iostream>

using namespace std;

//i/p -> 10,20,30,40 Position->3 
    //  Dry run 1 shift {40 10 20 30} {30 40 10 20} {20 30 40 10}
//o/p -> 20,30,40,10

// approach 1 -> call shiftByOne  by  position times
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

void rightShiftArrayByKPosition(int arr[],int size,int shiftLength){

    while(shiftLength--){
        rightShiftArrayByOnePosition(arr,size);
    }
}

//approach 2
//i/p -> 10,20,30,40,50,60,70 Position->3 
    
//o/p -> 50,60,70,10,20,30,40

void rightShiftArrayByKthPosition(int arr[],int size,int position){
    // step 1 use temp array for storing last positionValue(suppose 3) elements start with size-position 
    // step 2 loop from size-1 till position
    // step 3 arr[i] = arr[i-position];
    // step 4 after completing loop, copy temp in array

    int temp[position],j;
    for(int i=size-position,j=0;i<size;i++,j++){
        temp[j] = arr[i]; 
    }
    for(int i=size-1;i>=position;i--){
        arr[i] = arr[i-position];
    }
    for(int i=0,j=0;i<position;i++,j++){
        arr[i]=temp[j];
    }

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
    int shiftLength = 3;
    printArray(arr,size);

    cout<<"After right shift by "<<shiftLength << " position:\n";

    rightShiftArrayByKthPosition(arr,size,shiftLength);

    printArray(arr,size);
    return 0;

}

