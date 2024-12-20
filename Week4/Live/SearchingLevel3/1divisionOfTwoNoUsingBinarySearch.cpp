#include<iostream>
using namespace std;

//I/p 29 7 o/p 4(ignoring decimal value)

int binarySearchDivisionOfTwoNumbers(int dividend,int divisor){
    int quotient=-1;
    //find search space
    int s=0,e=dividend;
    while(s<=e){
        int m = s + (e-s)/2;
        int x = m * divisor;
        if(x==dividend){
            return m;
        }else if(x > dividend){
            //means m (quotient) bda hai hme chhota chhiye toh left mei jao
            e = m-1;
        }else{
            // x < dividend 
            //toh multiple jagah pr true ho skta hai hme nearest quotient chhiye toh store kro
            quotient = m;
            //right jao
            s = m+1;
        }
    }


    return quotient;
}

//precisison

double divisionKPrecison(int dividend,int divisor,int k){
    double quotient = binarySearchDivisionOfTwoNumbers(dividend,divisor);

    double step=0.1;
    int precision = k;

    for(int i=0;i<precision;i++){
        double j = quotient;
        while(j*divisor <= dividend){
            quotient = j;
            j+=step;
        }
        step/=10;
    }
    

    return quotient;
}
int main(){

    int dividend=951,divisor= -341;  
    //for negative numbers use absolute to make to positive then after getting the quotient,change sign

    // int ans = binarySearchDivisionOfTwoNumbers(abs(dividend),abs(divisor));

    //precison
    double ans = divisionKPrecison(abs(dividend),abs(divisor),3);

    //now we need to decide sign (+ve ya -ve)
    if((divisor>0 && dividend <0) || (divisor <0 && dividend >0)){
        ans*=-1;
    }
    cout<< ans;
    return 0;
}