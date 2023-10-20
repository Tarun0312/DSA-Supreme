#include<iostream>

using namespace std;


int sumN(int n){
    if(n==1){
        return 1;
    }

    return n+sumN(n-1);
}
// TC ->O(n)
// SC ->O(n)


int main(){

    int n = 10;
    cout<<sumN(n);
    return 0;
}