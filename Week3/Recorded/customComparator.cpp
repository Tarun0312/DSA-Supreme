#include<iostream>

using namespace std;

void printArray(vector<int>& arr){
    for(auto it : arr){
        cout<<it<<" ";
    }

    cout<<endl;
}

bool myComparator(int a,int b){
    // return a < b;//sorting in increasing order
    return a > b;//sorting in increasing order
}

int main(){

    vector<int> arr = {13,4,41,2,1,34,5};

    printArray(arr);

    // sort(arr.begin(),arr.end()); //sorting in increasing order
    sort(arr.begin(),arr.end(),myComparator); //sorting in decreasing order

    printArray(arr);
}