// Nested Loop Dry Run

#include<iostream>
using namespace std;

void printArray1(int arr[],int size){
    cout<<"Printing array"<<endl;

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr[i]<<","<<arr[j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void printArray2(int arr[],int size){
    
    cout<<"Printing array"<<endl;

    for(int i=0;i<size;i++){
        for(int j=0;j<size/2;j++){
            cout<<arr[i]<<","<<arr[j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void printArray3(int arr[],int size){
    
    cout<<"Printing array"<<endl;

    for(int i=0;i<size/2;i++){
        for(int j=0;j<size;j++){
            cout<<arr[i]<<","<<arr[j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}


void printArray4(int arr[],int size){
    
    cout<<"Printing array"<<endl;

    for(int i=0;i<size/2;i++){
        for(int j=0;j<size/2;j++){
            cout<<arr[i]<<","<<arr[j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}


void printArray5(int arr[],int size){
    
    cout<<"Printing array"<<endl;

    for(int i=0;i<size/2;i++){
        for(int j=i;j<size/2;j++){
            cout<<arr[i]<<","<<arr[j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}


void printArray6(int arr[],int size){
    
    cout<<"Printing array"<<endl;

    for(int i=0;i<size/2;i++){
        for(int j=size;j>=0;j--){
            cout<<arr[i]<<","<<arr[j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}


void printArray7(int arr[],int size){
    
    cout<<"Printing array"<<endl;

    for(int i=0;i<size/2;i++){
        for(int j=size-1;j>=0;j--){
            cout<<arr[i]<<","<<arr[j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void printArray8(int arr[],int size){
    
    cout<<"Printing array"<<endl;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            cout<<arr[i]<<","<<arr[j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}


int main(){

    int arr[4] = {10,20,30,40};
    int size = 4;

    // printArray1(arr,size); 
    // // o/p for n=4
    // 10,10 10,20 10,30 10,40
    // 20,10 20,20 20,30 20,40
    // 30,10 30,20 30,30 30,40
    // 40,10 40,20 40,30 40,40


    printArray2(arr,size); 
    // // o/p 
    // 10,10 10,20 
    // 20,10 20,20 
    // 30,10 30,20 
    // 40,10 40,20 

    // printArray3(arr,size); 
    // 10,10 10,20 10,30 10,40 
    // 20,10 20,20 20,30 20,40 

    // printArray4(arr,size);
    // 10,10 10,20 
    // 20,10 20,20 


    // printArray5(arr,size);
    // 10,10 10,20 
    // 20,20 

    // printArray6(arr,size);
    // 10,83116032 10,40 10,30 10,20 10,10 
    // 20,83116032 20,40 20,30 20,20 20,10 

    // printArray7(arr,size);
    // 10,40 10,30 10,20 10,10 
    // 20,40 20,30 20,20 20,10 


    // printArray8(arr,size);
    // 10,20 10,30 10,40 
    // 20,30 20,40 
    // 30,40 



}