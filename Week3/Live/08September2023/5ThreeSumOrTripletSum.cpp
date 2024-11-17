// https://leetcode.com/problems/3sum/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void tripletSum(vector<int>& arr,int target){
    int n = arr.size();

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }
}

bool find3Numbers(int A[], int arr_size, int sum)
{
    int l, r;
    /* Sort the elements */
    sort(A, A + arr_size);
    /* Now fix the first element one by one and find the
       other two elements */
    for (int i = 0; i < arr_size - 2; i++) {
 
        // To find the other two elements, start two index
        // variables from two corners of the array and move
        // them toward each other
        l = i + 1; // index of the first element in the
        // remaining elements
        r = arr_size - 1; // index of the last element
        while (l < r) {
            if (A[i] + A[l] + A[r] == sum) {
                printf("Triplet is %d, %d, %d", A[i], A[l],A[r]);
                return true;
            }
            else if (A[i] + A[l] + A[r] < sum)
                l++;
            else // A[i] + A[l] + A[r] > sum
                r--;
        }
    }
    // If we reach here, then no triplet was found
    return false;
}

void fourSum(vector<int>& arr,int target){
    int n = arr.size();

    for(int i=0;i<n;i++){
        int element1 = arr[i];
        for(int j=i+1;j<n;j++){
            int element2=arr[j];
            for(int k=j+1;k<n;k++){
                int element3=arr[k];
                for(int l=k+1;l<n;l++){
                    int element4=arr[l];
                    if(element1+element2+element3+element4 == target){
                        cout<<element1<<" "<<element2<<" "<<element3<<" "<<element4<<endl;
                    }
                }
            }
        }
    }
}
int main(){

    vector<int> arr= {10,20,30,40,50,60};
    //triplets (10,20,30)
    //(10,20,40)
    //(10,30,40) ==80
    //(20,30,40)

    // tripletSum(arr,80);

    fourSum(arr,100);

    return 0;
}