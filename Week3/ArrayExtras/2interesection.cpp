#include<iostream>
using namespace std;

vector<int> intersectionTwoArrays(vector<int>& a,vector<int>& b){
    vector<int> ans;
    int a_size=a.size();
    int b_size=b.size();

    for(int i=0;i<a_size;i++){
        for(int j=0;j<b_size;j++){
            if(a[i]==b[j]){
                b[j]*=-1; //mark visited 
                ans.push_back(a[i]);
            }
        }
    }

    return ans;
}

void printVector(vector<int> a){
    for(auto it : a){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr1={13,13,4,15,2};
    vector<int> arr2={2,13,13,15};

    vector<int> intersection1 = intersectionTwoArrays(arr1,arr2);
    printVector(intersection1);

    return 0;
}