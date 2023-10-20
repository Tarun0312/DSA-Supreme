#include<iostream>

using namespace std;

void printCountingNto1(int n){
    if(n==0){
        return;
    }
    cout<<n<<" "; //processing
    printCountingNto1(n-1);//recusive relation //tail recursion
} 
//TC ->O(n)
//SC ->O(n)

void printCounting1toN(int n){
    if(n==0){
        return ;
    }
    printCounting1toN(n-1);
    cout<<n<<" ";
}
//TC ->O(n)
//SC ->O(n)

int main(){

    int n = 10;
    // printCountingNto1(n);
    printCounting1toN(n);
    return 0;
}