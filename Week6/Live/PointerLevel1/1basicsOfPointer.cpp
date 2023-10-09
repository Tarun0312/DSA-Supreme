#include <iostream>
using namespace std;


int len(char* st){
    return strlen(st);
}
int main() {

    //function pointer
    {   char a[10]="babbar";
        int(*fp)(char*)=len;
        int(*fp1)(char*)=&len;

        cout<<len(a)<<endl;
        cout<<fp(a)<<endl;
        cout<<fp1(a)<<endl;
    }



    // char *cptr = "Babbar";//constant
    // // cptr[3]='a'; redefinition of cptr so error
    // cout<<cptr<<endl;

    char a[3] = {'a','b'};
    // char * cptr4 = &a; //syntax error
    char(* cptr4)[3] = &a;

    //accessing array elements ways
  {  
        int arr[4] = {10,20,30,40};
        for(int i=0;i<3;i++){
            // cout<<arr[i]<<" "; //or
            // cout<< *(arr + i)<<" "; // or
            cout<< i[arr]<< " "; //new thing
        }

        cout << 1[arr]<< " ";
    }


    {
        char ch[10] = "babbaraa";
        cout << ch<< endl;
        cout<<&ch[0]<<endl;
        cout<<ch<< endl;

        //char* cptr = &ch; //syntax error
        char(* cptr1)[10] = &ch;
        cout<<cptr1 << endl; //base address
        cout<< *cptr1 << endl; //entire string

    }
 



//   char ch1[10] = "a111";
//   char *cptr1 = ch1;
//   cout << cptr1;


//   int arr[5] = {1,2,3,4,5};
//   arr = arr + 1; //syntax error




//   int a = 5;
//   int* p = &a;

//   p = p + 1; 
//   cout << *p;//garbage value or run time error (accessing unreserved memory location)
//   int* ptr=0 ;
//   cout << *ptr << endl;


//   int a = 5;
//   cout << a << endl;
//   cout << "address of a : "<< &a << endl;
  
  {
    // //   //pointer creation
//   int* ptr = &a;
//   //acessing value stored at address stored in ptr
//   cout << ptr << endl;
//   cout << "Accessing: " << *ptr << endl;
//   cout << &ptr << endl;

  }



  return 0;
}