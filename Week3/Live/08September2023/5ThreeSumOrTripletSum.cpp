// https://leetcode.com/problems/3sum/

#include<iostream>
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