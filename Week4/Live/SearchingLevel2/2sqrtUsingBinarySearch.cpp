// https://leetcode.com/problems/sqrtx/

// class Solution {
// public:
//     int mySqrt(int x) {
        
//         //find search space
//         int s=0 ,e=x;
//         int ans = 0;
//         while(s<=e){
//             long long  mid = s + (e-s)/2;
//             long long square = mid * mid; // integer overflow ho skta hai use long long
//             //predicate function //true or false
//             if(square==x){
//                 return mid;
//             }else if(square > x){
//                 //left mei jao
//                 e = mid-1;
//             }else{
//                 //right mei jao but pehle ans store kro less hai x hai se toh answer ho skta hai
//                 ans = mid;
//                 s = mid+1;
//             }
//         }
        
//         return ans;
//         //TC ->O(logn)
//         //SC ->O(1)
//     }
// };

#include<iostream>
#include<iomanip>
using namespace std;

double sqrtGivesFloatValueTill3DecimalPlaces(int x){
    cout<<fixed;
    setprecision(3);
    double s=0,e=x; 
    double step=0.001;
    double ans = 0;
    while(s<=e){
        double mid = s + (e-s)/2; 
        double square = mid * mid;
        cout<<s<<" "<<mid<<" "<<e<<" "<<square;
        cout<<"\n";
        if(square == x){
            // cout<<"aa\n";
            return mid;
        }else if(square > x){
            //left
            e= mid - step;
        }else if(square<x){
            //ans store
            ans = mid;
            //right
            s = mid + step;
        }
        cout<<"After"<<s<<" "<<mid<<" "<<e<<" "<<square;
        cout<<"\n";
    }
    cout<<"\n"<<s<<" "<<e<<"\n";
    return ans;
}

int main(){

    int num = 64;
    
    cout<<"Square root of "<<num<<setprecision(3)<<" is "<<sqrtGivesFloatValueTill3DecimalPlaces(num)<<endl;

    return 0;
}