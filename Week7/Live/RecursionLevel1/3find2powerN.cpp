#include<iostream>

using namespace std;

int power2(int n){
    if(n==0){
        return 1;         
    }
    int ans = power2(n-1);
    return 2*ans;
}
//TC -> O(n)
//SC -> O(n)


int main(){

    int n=10;
    cout<<power2(n);
    return 0;
}