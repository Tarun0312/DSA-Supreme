#include<iostream>

using namespace std;


// i/p -> 10 20 30 40 50
// o/p    20 30 40 50 10

void leftShiftBy1Position(int arr[],int size){
    //Algo
    // Step 1 -> temp mei arr[0] ko store krwao
    // Step 2 -> start loop with i=0 till size-2
    // Step 3 -> do in loop arr[i] = arr[i+1]
    // Step 4 -> outside loop a[size-1] = temp;

    int temp = arr[0];
    for(int i=0;i<size-1;i++){
        arr[i] = arr[i+1];
    }
    arr[size-1] = temp;

}

// i/p -> 10 20 30 40 50 position(4)
// o/p    50 10 20 30 40
void leftShiftArrayByKthPosition(int arr[],int size,int shiftLength){
    // Algo
    // Step 1 copy array elements in temp array till position-1 elements
    // Step 2 traverse array(i) from position-1 till last element and store in arr starting from 0(j)
    //Step 3 do arr[j] = arr[i+1]
    //Step 4 copy temp arr to original array at last in original array

    // 11,34,11,34,12,89,12
    int temp[shiftLength];
   
    for(int i=0;i<shiftLength;i++){
        temp[i]=arr[i];
    }

    int j=0;
    for(int i=shiftLength-1;i<size-1;i++){
        arr[j++]=arr[i+1];
    }

    for(int i=0;i<shiftLength;i++){
        arr[j]=temp[i];
        j++;
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

    int arr[] = {11,34,11,34,12,89,12};
    // 12 89 12 11 34 11 34
    // 34 11 34 12 89 12 11
    // 11 34 12 89 12 11 34
    // 34 12 89 12 11 34 11
    // 12 89 12 11 34 11 34

    int size = 7;

    cout<<"Before shifting :\n";
    printArray(arr,size);
    
    leftShiftArrayByKthPosition(arr,size,4);

    cout<<"After shifting :\n";
    printArray(arr,size);



    return 0;

}