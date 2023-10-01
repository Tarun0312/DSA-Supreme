#include<iostream>
#include<cstring> //for strlen
using namespace std;

//i/p 1 2 1   a b a b   bob noon racecar   01010
//o/p 1         0       1     1    1

void convertToLowercase(char [],int);

bool checkPalindrome(char a[],int n){
    //palindrome means reading from left to right==reading from right to left

    //Approach 1 -> if after reversing string is same,then it is a palindrome

    char temp[n];
    for(int i=0;i<n;i++){
        temp[i]=a[i];
    }
    reverse(temp,temp+n);
    
    for(int i=0;i<n;i++){
        if(a[i]!=temp[i]){
            return false;
        }
    }
    return true;

    //Tc->O(n)
    //Sc ->O(n)
}

bool checkPalindromeEfficient(char a[],int n){
    //Two Pointer

    //compare first and last character,second and second last character and so on

    int left = 0 , right = n-1;

    //convert either in uppercase or in lowercase
    convertToLowercase(a,n);

    while(left<=right){
        if(a[left]!=a[right]){
            return false;
        }else{
            left++;
            right--;
        }
        
    }

    return true;

    //TC -> O(n)
    //SC ->O(1)
}

void convertToLowercase(char a[],int n){

    for(int i=0;i<n;i++){
        if(a[i]>='A' && a[i]<='Z'){
            a[i]=a[i]-'A'+'a';
        }
    }
}

int main(){
    char ch [20];
    cin.getline(ch,20);

    // cout<<(checkPalindrome(ch,strlen(ch)) ? "Yes" : "No");

    cout<<(checkPalindromeEfficient(ch,strlen(ch)) ? "Valid" : "Invalid");
}