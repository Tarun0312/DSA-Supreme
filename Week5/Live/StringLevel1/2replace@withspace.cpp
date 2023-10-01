#include<iostream>
using namespace std;

void replaceAtThRateSymbolWithSpace(char a[]){

        int index=0;
        while(a[index]!='\0'){
            if(a[index]=='@'){
                a[index]=' ';
            }
            index++;
        }

        // Tc -> O(l) l->length of string
}



int main(){

    char a[] = "Tarun@is@a@Boy";

    cout<<"Before "<<a<<endl;
    replaceAtThRateSymbolWithSpace(a);
    cout<<"After "<<a<<endl;
    return 0;
}