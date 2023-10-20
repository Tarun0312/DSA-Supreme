#include<iostream>

using namespace std;

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}
// TC -> O(n)
// SC->  O(n)

int main(){

    int n=6;
    cout<<factorial(n);
    return 0;
}