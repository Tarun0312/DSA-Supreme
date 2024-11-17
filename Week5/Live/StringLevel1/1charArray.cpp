#include<iostream>
#include<string.h> //for strlen
#include<cstring>//for strrev
using namespace std;


int lengthOfString(char ch[],int size){

    int count=0;

    // //end of string is null character
    // while(ch[count]!='\0'){
    //     count++;
    // }

    for(int i=0;i<size;i++){
        if(ch[i]=='\0'){
            break;
        }else{
            count++;
        }
    }

    return count;

    //Tc-> O(n)
}

void reverseString(char ch[],int length){
    //two pointer
    int left = 0,right=length-1;
    while(left<right){
        swap(ch[left],ch[right]);
        left++;
        right--;
    }

    //tc->O(n)
}

void convertToUppercase(char a[],int n){
 
    for(int i=0;i<n;i++){
        if(a[i]>='a' && a[i]<='z'){
            // a[i]=a[i]-32;  //'b'-32='B'(98-32=66)

            //lowercase to uppercase
            //lowercaseChar - 'a'+'A'
            a[i]=a[i]-'a'+'A';
      

            //uppercase to lowercase B->b
            //uppercaseCharacter-'A'+'a'=>'B'-'A'+'a'=>66-65+97  =>98='b'
        }
    }

    // Tc->O(n)
}

int main(){


    //Basic of char array
    {
            //creation 
            char ch[10];

            //in char array no need of individual input and print using loop but we can do using loop too like in integer array

            //input
            //for char array ,when cin is used for input then delimiters for cin are enter,space,tab inn characters ke baad i/p lena rok deta hai 
            //use getline in those cases

            // cin>>ch;  //use without space string


            //use when withspace string
            // cin.getline(whereToStore,maxSizeOfInput);

            // cin.getline(ch,100);//delimiters for getline are enter and newline

            //output
            // cout<<"Printing the value of ch: "<<ch<<endl;

            //internally in ch, a null character '\0'(single character) is stored at the end of string to mark the end of string e.g
            //indx 012345
            //ch=tarun\0

            //Null Character ->ASCII VALUE ->0

            //access a particular index
            cout<<ch[2]<<endl;

            //printing using loop
            // for(int i=0;i<100;i++){
            //     cout<<"At index "<<i<<" "<<ch[i]<<"\n";
            // }

            // char temp = ch[5];
            // int nullCharAsciiValue=(int)temp;
            // cout<<nullCharAsciiValue<<endl;


            /************** Char array is memory effiecient and faster than string ..ALWAYS PREFER CHAR ARRAY TO AVOID TLE 
             ***********************/

    }




    //some basic string problems
    char ch[20];
    cin.getline(ch,20);

    cout<<"Length of string is "<<lengthOfString(ch,20)<<endl;
    cout<<"Printing length: "<<strlen(ch)<<endl;

    cout<<"Before "<<ch<<"\n";
    reverseString(ch,strlen(ch));
    cout<<"After "<<ch<<endl;

    // //predefined function for reverse
    // reverse(ch,ch+strlen(ch));
    // // strrev(ch); //deprecated
    // cout<<"After "<<ch<<endl;

    cout<<"Before "<<ch<<"\n";
    convertToUppercase(ch,strlen(ch));
    cout<<"After "<<ch<<endl;
    
    return 0;
}