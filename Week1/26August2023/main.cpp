#include<iostream>
using namespace std;

int main(){

    /********************************** */
    //1 Decimal to Binary Conversion using divison method
    // i/p -> 10 
    // o/p -> 1010
    int n;
    cin>>n;
    int temp = n;
    // int binary=0,remainder,unit=0;
    // while(temp>=1){
    //     remainder = temp%2;
    //     binary += remainder * pow(10,unit);
    //     unit+=1;
    //     temp/=2;
    // }
    // cout<<"Binary of Decimal No "<<n<<" is "<<binary;


     /********************************** */
    //2 Decimal to Binary Conversion using Bitwise Method
    // int bit,binary=0,unit=0;
    // while(temp>0){
    //     bit = temp & 1;//right most bit || LSB
    //     binary +=bit * pow(10,unit++);
    //     temp = temp >> 1 ;// right shift by 1 e.g 11001 after >> by 1 1100
    // }
    // cout<<"Binary of Decimal No "<<n<<" is "<<binary;


    /********************************** */
    //3 Binary To Decimal Conversion using Divsion Method
    int decimal=0,lastDigit,unit=0;
    while(temp){
        lastDigit = temp%10;
        decimal+= lastDigit * pow(2,unit++);
        temp/=10;
    }

    cout<<"Decimal of Binary Number "<<n<<" is "<<decimal;

    /********************************** */
    //4 Binary To Decimal Conversion
    // int bit,unit=0,decimal=0;
    // while(temp){   
    //     bit = temp % 10; 
    //     // decimal+= bit * pow(2,unit++); 
    //     decimal += bit << unit++;
    //     temp = temp/10;
    // }
    // cout<<"Decimal of Binary Number "<< n <<" is "<<decimal;

    // Left shift by 1 -> left most bit 
    // eg -> 101

    return 0;
}
