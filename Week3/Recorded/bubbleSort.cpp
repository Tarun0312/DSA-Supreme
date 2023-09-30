#include<iostream>

using namespace std;

void printArray(vector<int>& arr){
    for(auto it : arr){
        cout<<it<<" ";
    }

    cout<<endl;
}

void bubbleSort(vector<int>& arr){

    int n = arr.size();
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    //sorting in descending order
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         if(arr[j] < arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }
}

void optimisedBubbleSort(vector<int>& arr){
    int n = arr.size();

    for(int i=0;i<n-1;i++){
        int count = 0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                count++;
            }
        }
        if(count==0){
            //array is already sorted
            break;
        }
    }
}


//TC -> O(N*N)
//SC -> O(1)

int main(){
    vector<int> arr={1,4,3,2,1};

    printArray(arr);
    // bubbleSort(arr);
    optimisedBubbleSort(arr);
    printArray(arr);
    return 0;
}