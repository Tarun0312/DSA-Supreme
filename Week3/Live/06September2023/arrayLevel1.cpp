#include<iostream>
#include<limits>

using namespace std;

void printArray(int a[],int size){
    for(int i=0;i<size;i++){
        a[i]=a[i]*2;
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

//Linear Serach in an array
bool isTargetElementExist(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}

//count Zeroe's and one's in an array
void printCountZeroAndCountOne(int arr[],int size){
    int zeroes,ones;
    zeroes=ones=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zeroes++;
        }else if(arr[i]==1){
            ones++;
        }
    }
    cout<<"Total number of zeroes: "<<zeroes<<" and ones: "<<ones;
}


/*Minimum number in an array */
int findMinimumInArray(int arr[],int size){

//INT_MAX==2^31 - 1
//INT_MIN== -2^31

int minAns = INT_MAX; // best practice max=INT_MIN
// for(int i=0;i<size;i++){
//     if(arr[i]<minAns){
//         minAns=arr[i]; //minAns=min(arr[i],minAns)
//     }
// }


// using predefined max function
for(int i=0;i<size;i++){
    minAns=min(minAns,arr[i]);
}
return minAns;
}


/* Reverse an array */
void reverseArray(int arr[],int size){
    // int temp;
    // for(int i=0;i<size/2;i++){
    //     //swap first element with last elemt
    //     // swap second element with second last elemt and so on
    //     temp = arr[i];
    //     arr[i]=arr[size-1-i];
    //     arr[size-1-i]=temp;
    // }

    int left=0,right=size-1;
    while(left<right){  //(!(left>right))
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
   
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

//extreme print in an array
//i/p {1,2,3,4,5,6,7,8,9}
//o/p {1 9 2 8 3 7 4 6 5} 
void extremePrintInArray(int arr[],int size){
    int left=0;
    int right=size-1;
    while(left<=right){
        if(left==right){
            cout<<arr[left];
        } 
        else{
         cout<<arr[left]<<" "<<arr[right]<<" ";
        }
        left++;
        right--;
    }
}

int main(){
    // int arr[10];
    // int n=10;
    // for(int i=0;i<n;i++){
    //     cout<<"Enter the element at index "<<i<<" ";
    //     cin>>arr[i];
    // }
    // cout<<"After Doubling the array elements are:->\n";
    // for(int i=0;i<n;i++){
    //     arr[i]=arr[i]*2;
    //     cout<<arr[i]<<" ";
    // }

    // int arr[5],n=5;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int sum=0;
    // //sum of elements of array
    // for(int i=0;i<n;i++){
    //     sum=sum+arr[i];
    // }
    // cout<<"Sum of elements of array is "<<sum;

    /* Linear Search in an Array */
    // int target,arr[10],n=10;
    // int i;

    // bool flag =0;
    //0 not found 
    //1 found

    // cin>>target;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(i=0;i<n;i++){
    //     if(arr[i] == target){
    //         flag=1;
    //         break;
    //     }
    // }
    // if(flag==1){
    //     cout<<"Element found at index "<<i;
        
    // }else{
    //     cout<<"Element not found in array";
    // }
    

    /* Function and arrays */
    // int arr[6]={10,3,4,5,2,1};
    // int n=6;
    // printArray(arr,n);
    // // cout<<"Array pass by reference"<<endl;
    // // for(int i=0;i<n;i++){
    // //     cout<<arr[i]<<" ";
    // // }


    /* Linear Search function */
    // int arr[8] = {120,1,1,1,21,212,76,34};
    // int n=8;
    // int target=716;
    // if(isTargetElementExist(arr,n,target)){
    //     cout<<"Target Found";
    // }else{
    //     cout<<"Target Not Found";
    // }


    /* count Zeroe's and one's in an array */
    // int arr[10]={10,1,21,1,0,1,2,0,0,1};
    // int n=10;
    // printCountZeroAndCountOne(arr,n);

    /*Minimum number in an array */
    int arr[10]={10,21,2,1,34,1,2,90,1,-1};
    int size=10;
    int minimum=findMinimumInArray(arr,size);
    cout<<minimum;

    /* Reverse an array */
    // int a[10]={10,21,21,121,324,12,901,11,111,10};
    // int size=10;
    // reverseArray(a,size);
    

    /* Extreme Print In Array */
    // int arr[9]={1,2,3,4,5,6,7,8,9};
    // int size=9;
    // extremePrintInArray(arr,size);


    return 0;

}