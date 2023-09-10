#include<iostream>

using namespace std;

int main(){

//Bitwise and

int a=2,b=5;
cout<<(a&b)<<endl;
// cout<<(5&10)<<endl;

//Bitwise or
// cout<<(5|10)<<endl;

//Biitwise not
// int n=1;
// cout << ~n << endl;//-2x
// cout << (~n) << endl;//-2
// cout << ~(n) << endl;//-2

// bool num=1; 
// cout << ~num << endl;

//Bitwise xor
// int n1=10;
// int n2=5;
// cout << (n1^n2) << endl;
// cout << (5^-5) <<endl;

//Bit wise left shift

// cout << (5<<2) << endl;

// cout << (10>>2) << endl;

// int num = -10;
// cout << (num>>2) << endl;

// unsigned int num1 = -10;
// cout << (num1>>2) << endl;

// cout << (10 << -1) << endl;
// number left shift n == number * 2^n 
// number right shift n == number / 2^n 
// if a number is signed negative number then compiler will handled right shift but in case of unsigned negative number ,the compiler will give large positive number
// if a number left shift by negative number ,then we get a  garbage value in some compiler in my vs code i get 1 (in both left shift and right shift) compiler dependent


//Pre post operator

// int a=10;

// // cout << (++a) * (a++) << endl;
// cout << (a++) * (++a) << endl;
// return 0;

}
