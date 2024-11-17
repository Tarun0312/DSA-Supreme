#include<iostream>

using namespace std;



void merge(int arr[],int s,int e){

    //create left and right array from original array using mid
    int mid = s + (e-s)/2;

    int leftLen = mid - s + 1;
    int rightLen = e - mid ;
    int* leftArray = new int [leftLen];
    int* rightArray = new int [rightLen];

    //copying value into left array from original array
    // k -> starting index of left Array values in original array
    int k = s;

    for(int i=0;i<leftLen;i++){
        leftArray[i]=arr[k];
        k++;
    } 


    //copying value into right array from original array
    // k -> starting index of right Array values in original array
    k= mid+1;
    for(int i=0;i<rightLen;i++){
        rightArray[i]=arr[k];
        k++;
    }


    //now merge 2 sorted arrays using two pointer approach
    // left array is already sorted
    //right array is already sorted
    int leftIndex = 0;
    int rightIndex = 0;

    //yahan pr galti kroga 0 se initilaize nhi krna start se krna hai
    int mainArrayIndex = s;

    while(leftIndex<leftLen && rightIndex<rightLen){
        if(leftArray[leftIndex]<rightArray[rightIndex]){
            arr[mainArrayIndex]=leftArray[leftIndex];
            leftIndex++;
            mainArrayIndex++;
        }else{
            arr[mainArrayIndex]=rightArray[rightIndex];
            rightIndex++;
            mainArrayIndex++;
        }
    }

    //case 1 when left array is exhausted but right array mei elements bache hai
    while(rightIndex<rightLen){
        arr[mainArrayIndex]=rightArray[rightIndex];
        rightIndex++,mainArrayIndex++;
    }

    //case 2 when right array is exhausted but left array ke elements bache hai original array mei inserted krne ke liye
    while(leftIndex<leftLen){
        arr[mainArrayIndex]=leftArray[leftIndex];
        leftIndex++,mainArrayIndex++;
    }

    //remember to deallocate the memory
    delete[] leftArray;
    delete[] rightArray;

}

void mergeSort(int arr[],int s,int e){

    //Base case
    if(s>e){
        //invalid array
        return ;
    }
    if(s==e){
        //single element
        return;
    }
    //we can combine above two conditions
    // if(s>=e) return

    //break the array (divide)
    int mid = s + (e-s)/2;

    //s -> mid (left array)
    // mid +1 -> e (right array)
    //sort left array using recursion
    mergeSort(arr,s,mid);
    //sort right array using recursion
    mergeSort(arr,mid+1,e);

    //merge 2 sorted arrays
    merge(arr,s,e);
}
//Tc -> O(nlogn)
//sc -> O(n)

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {45,12,90,87,1,6};
    int size = 6;
    int s = 0;
    int e = size - 1;
    cout<<"Before Merge Sort\n";
    printArray(arr,size);
    mergeSort(arr,s,e);
    cout<<" After Merge Sort\n";
    printArray(arr,size);

    return 0;
}