#include<iostream>
#include<vector>

using namespace std;

void printArray(vector<int>& arr){
    for(auto it : arr){
        cout<<it<<" ";
    }

    cout<<endl;
}


void selectionSort(vector<int>& arr){

    int n = arr.size();
    
    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }

    //sorting in descending order

    // int n = arr.size();
    
    // for(int i=0;i<n-1;i++){
    //     int maxIndex = i;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j] > arr[maxIndex]){
    //             maxIndex=j;
    //         }
    //     }
    //     swap(arr[i],arr[maxIndex]);
    // }

}


//TC -> O(N*N)
//SC -> O(1)

int main(){
    vector<int> arr={4,1,3,2,1};

    printArray(arr);
    selectionSort(arr);
    printArray(arr);
    return 0;
}