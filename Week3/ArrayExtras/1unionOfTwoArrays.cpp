#include<iostream>
using namespace std;

vector<int> unionTwoArrays(vector<int>& a,vector<int>& b){
    vector<int> ans;
    int a_size=a.size();
    int b_size=b.size();

    for(int i=0;i<a_size;i++){
        ans.push_back(a[i]);
    }
    for(int i=0;i<b_size;i++){
        ans.push_back(b[i]);
    }

    return ans;
}

// eg -> i//p {1,2,4,8,3}  {2,5,6,3} o/p{1,2,4,8,3,5,6} 
//union in case of duplicate exists

vector<int> unionTwoArraysDuplicateCase(vector<int>& a,vector<int>& b){
    int a_size = a.size();
    int b_size = b.size();

    //check common elements in both array and mark as INT_MIN
    for(int i=0;i<a_size;i++){
        for(int j=0;j<b_size;j++){
            if(a[i]==b[j]){
                b[j]=INT_MIN;
            }
        }
    }
    
    vector<int> ans;
    for(int i=0;i<a_size;i++){
        ans.push_back(a[i]);
    }
    for(int i=0;i<b_size;i++){
        if(b[i]!=INT_MIN) //if a element is not INT_MIN,then only it will be added and we have marked INT_MIN for those elements which are present in both arrays so duplicate will be avoided
            ans.push_back(b[i]);
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
    vector<int> arr1={12,13,13,4,45,15};
    vector<int> arr2={2,13,15};

    vector<int> union1 = unionTwoArrays(arr1,arr2);
    printVector(union1);

    vector<int> union2 = unionTwoArraysDuplicateCase(arr1,arr2);
    printVector(union2);

    
    return 0;
}