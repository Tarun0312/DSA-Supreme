#include<iostream>
#include<stack>
#include<vector>

using namespace std;

//I/p = {8,3,1,3,2}
//o/p = {-1,-1,-1,1,1}

//brute force -> Tc O(n^2)

void prevSmallerElement(int *arr,int size,vector<int>& ans){

    stack<int> st;
    st.push(-1);

    for(int i=0;i<size;i++){
        int curr = arr[i];

        //ans find kro curr ke liye
        while(st.top()>=curr){
            st.pop();
        }

        ans[i]=st.top();

        st.push(curr);
    }
}
//tc-> O(n)
//sc-> O(n)

int main(){
    int arr[5] = {8,3,1,3,2};
    int size = 5;

    vector<int> ans(size);
    prevSmallerElement(arr,size,ans);

    for(auto i : ans){
        cout<<i<<" ";
    }

    return 0;
}