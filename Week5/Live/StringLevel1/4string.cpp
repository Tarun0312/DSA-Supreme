#include<iostream>
using namespace std;

//String-> Sequence of characters terminated with null character

//char arr[] -> fixed size like int arr[]
//string -> dynamic size like vector

int main(){

    //Basics of String
    /*
    {
        //creation of string
        string name ;

        //input
        //cin>>name; //space ,tab ,enter are delimiters for cin
        getline(cin,name);//used in case of string to input space and tab,here enter is the only delimter


        //print
        cout<<name<<endl;;

        cout<<"Printing third charcter "<<name[2]<<endl;

        //loop till null character

        int index=0;
        while(name[index]){
            cout<<"index->"<<index<<" char->"<<name[index++]<<endl;
        }

        cout<<"Print ascci value of null character "<<(int)name[index];
    }*/

    //Utility function|| predeined function of string

    /*
    {
        string name;

        getline(cin,name);

        string s1 = "";//empty string
        cout<<"Length of string is "<<name.length()<<endl;
        cout<<"String is empty or not: "<<name.empty()<<endl;
        cout<<"String is empty or not: "<<s1.empty()<<endl;

        string s2="abqcd";
        cout<<"Character at index 2 is "<<s2.at(2)<<endl;//s2[2]


        cout<<"Front character(first chacter) is "<<s2.front()<<endl;
        cout<<"Back character(last character) is "<<s2.back()<<endl;
        
        string x1="Tarun";
        string x2="Sardana";
        //append is used for concatenate two string
        x1.append(x2);
        cout<<"Append x1 and x2 "<<x1<<endl;


        //erase-> remove part of string
        string x3 = "This is a Car"; 
        //after erase i need -> This a Car 
        //index 4 se start hokr  3 charcter erase huye 
        //->erase(indexFromWhereToDelete,howManyCharctrToBeErase)
        x3.erase(4,3);
        cout<<"Erasing 3 chacterrs starting from index 4: "<<x3<<endl;

        //insert at middle
        string n1="Tarun Sardana";
        string middle = "Kumar ";
        n1.insert(6,middle);
        cout<<"Inserting at index 6: "<<n1<<endl;

        //push_back() -> insert a chacter at last
        string z1="Kumar";
        z1.push_back('a');
        cout<<"Pushback in z1 "<<z1<<endl;
        z1.pop_back();
        cout<<"Popback in z1 "<<z1<<endl;
    }
    */

    //find a string in another string
    {   
        //i/p "Yar tera super star desi kalakar" "star"
        //o/p  found

        //find() function return npos if string not found
        //if found then not return npos
        //npos is a member of string class (string::npos)
        //npos means no position found

        string s1 = "Yar tera super star desi kalakar";
        string s2 = "stara";
        int found = s1.find(s2);
        if(found == string::npos){
            //value of npos is -1 when string not found
            cout<<"Not Found "<<found<<endl; //-1
        }else{
            //find returns index of first occurence
            cout<<"Found at index "<<found<<endl; //15
        }
    }

    //comparison of two strings
    {
        string str1 = "babbar";
        string str2 = "Babbar";
        int value = str1.compare(str2);
        if(value==0){
          cout<<"Matching\n";  
        }else{
            cout<<"Not matching "<<value<<endl;
        }

        //         Returns:
        // 0 : if both strings are equal.

        // A value < 0 : if *this is shorter than str or,
        // first character that doesn't match is smaller than str. s1="a" s2="b" a<b then compare return -1

        // A value > 0 : if *this is longer than str or,
        // first character that doesn't match is greater
        //s1="b" s2="a"  b>a then compare return 1
    }

    //substring ->substr(indexFromWhereUNeedString,howManyChacters)
    //i/p This is a Car (5thindex se 5 character) o/p is(space)a(space)

    {
        string str1 = "This is a Car";

        cout<<"Substring of 5 chacaters staring from index 5:"<<str1.substr(5,5);
    }

    {
        // "2"+"3"//no addition of string 
        // string s1 = "23";
        // cout<<s1;
        int x = 10;
        string ch= to_string(x); //convert integer to string

        cout<<ch;
    }
}

