#include<iostream>

using namespace std;

int main(){

    float a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    float result;
    char op;
    cout << "Enter which operation you want to perform";
    cin >> op;

    // using if else
    // if(op=='+'){
    //     result = a+b;
    // } else if(op == '-'){
    //     result = a-b;
    // } else if(op == '*'){
    //     result = a*b;
    // } else if(op == '/'){
    //     result = a/b;
    // }else{
    //     cout << "Invalid operation";
    //     return 0;
    // }
    //using switch
    switch(op){ //expression must have integral value(integer == whole number)
    // int, short, char. long,long long and their unsigned versions
        case '+':
            result = a+b;
            break;
        case '-':
            result = a-b;
            break;
        case '*':
            result = a*b;
            break;
        case '/':
            result = a/b;
            break;
        default :
            cout<<"Invalid operation";
            return 0;
    }
    cout<<"Result is "<<result;

    return 0;
}