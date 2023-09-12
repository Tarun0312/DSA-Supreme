#include<iostream>

using namespace std;

//constraint -> duplicate element occuring twice
// and only 1 unique element
// then use xor

int findUniqueElement(int arr[],int size){
    int unique=0;
    for(int i=0;i<size;i++){
        unique =unique^arr[i];
    }
    return unique;
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
    int size = 7;
    printArray(arr,size);
    cout << "Unique Element is :" <<findUniqueElement(arr,size)<<endl;

    return 0;

}