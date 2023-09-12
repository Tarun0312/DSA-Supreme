#include<iostream>

using namespace std;

// i/p 10 20
// o/p 10,10 10,20  20,10 20,20


void printPairs(int arr[],int size){

    
    cout<<"Printing Pairs: \n";
    for(int i=0 ; i<size ;i++){
        for(int j=0;j<size;j++){
            cout<< "("<<arr[i] <<","<<arr[j] <<")"<<endl;
        }
    }
  
}

int main(){

    int arr[] = {10,20,30};
    int size = 3;
    printPairs(arr,size);


    return 0;

}