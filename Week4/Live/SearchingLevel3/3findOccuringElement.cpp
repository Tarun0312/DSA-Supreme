#include<iostream>
using namespace std;

int findOddOccuringElementIndex(vector<int> arr){
    int n = arr.size();
    int s=0,e=n-1;
    while(s<=e){
        int m = s + (e-s)/2;

        if(s==e){
            return m; //or s or e
        }

        if(m & 1){
            //odd index
            if(m-1>=0 && arr[m]==arr[m-1]){
                //ans ke left mei ho
                //right jao
                s = m+1;
            }else{
                //ans ke right mei ho
                //left jao
                e = m-1;
            }
        }else{
            //even index
            if(m+1 < n && arr[m]==arr[m+1]){
                //ans ke left mei ho
                //right jao but m+1 check kr chuke ho toh m+2
                s = m+2;
            }else{
                //right pr ho ya ans pr ho 
                //left jaana hai but answer lost nhi hona chhihye
                //peak in a mountain case
                e = m;
            }
        }
    }

    return -1;
}
// Tc -> O(logn)
//Sc -> O(1)

int main(){

    // vector<int> arr = {10,10,2,2,5,5,2,5,5,20,20,11,11,10,10};
    vector<int> arr1 = {2,1,1,3,3,2,2};

    int ans = findOddOccuringElementIndex(arr1);
    cout<<ans;
    return 0;
}