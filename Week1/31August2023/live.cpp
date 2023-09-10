#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    /* Full Pyramid ******************************************** */
    // for(int row=0;row<n;row++){
    //     // space
    //     for(int col=0;col<n-row-1;col++){
    //         cout<<" ";
    //     }
    //     // star
    //     for(int col=0;col<row+1;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    /* Inverted Full Pyramid *********************************** */
    // for(int row=0;row<n;row++){
    //     // space
    //     for(int col=0; col<row;col++){
    //         cout<<" ";
    //     }
    //     // *
    //     for(int col=0; col<n-row;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    /* Solid Diamond ****************************************** */
    // int num;
    // cin>>num;
    // int n=num/2;
    // // full pyramid
    // for(int row=0;row<n;row++){
    //     //space
    //     for(int col=0;col<n-row-1;col++){
    //         cout<<" ";
    //     }
    //     // *
    //     for(int col=0;col<row+1;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // // inverted full pyramid
    // for(int row=0;row<n;row++){
    //     //space
    //     for(int col=0;col<row;col++){
    //         cout<<" ";
    //     }
    //     //*
    //     for(int col=0;col<n-row;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    /* Hollow Full Pyramid *********************************** */

    // for(int row=0;row<n;row++){
    //     // space
    //         for(int col=0;col<n-row-1;col++){
    //             cout<<" ";
    //         }
    //     // star
    //         for(int col=0;col<row+1;col++){
    // print * at first and last column onlu
    //             if(col==0 || col == row+1-1){
    //                 cout<<"* ";
    //             }
    //             else{
    //                 cout<<"  ";
    //             }
    //         }
    //     cout<<endl;
    // }

    /* Hollow Inverted Full Pyramid **************************** */

    // for(int row=0;row<n;row++){
    //     // space
    //     for(int col=0;col<row;col++){
    //         cout<<" ";
    //     }
    //     //*
    //     for(int col=0;col<n-row;col++){
    //         if(col==0 || col==n-row-1){
    //             cout<<"* ";
    //         }
    //         else {
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    /* Hollow Diamond **************************************** */

    // int num;
    // cin>>num;
    // int n=num/2;
    
    
    /* Hollow Full Pyramid ********************* */
    // for(int row=0;row<n;row++){
    //     // space
    //     for(int col=0;col<n-row-1;col++){
    //         cout<<" ";
    //     }
    //     // *
    //     for(int col=0;col<row+1;col++){
    //         if(col==0 || col==row+1-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // /* Hollow Inverted Full Pyramid **************** */
    // for(int row=0;row<n;row++){
    //     //space
    //     for(int col=0;col<row;col++){
    //         cout<<" ";
    //     }
    //     //*
    //     for(int col=0;col<n-row;col++){
    //         if(col==0 || col==n-row-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    /* Print stars outside Hollow Diamond ********************* */
    // int num;
    // cin>>num;
    // int n=num/2;
    // for(int row=0;row<n;row++){
    //     //Inverted Half Pyramid
    //     for(int col=0;col<n-row;col++){
    //         cout<<"*";
    //     }
    //     //Full Pyramid
    //     for(int col=0;col<2*row+1;col++){
    //         cout<<" ";
    //     }
    //     //Inverted Half Pyramid
    //     for(int col=0;col<n-row;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int row=0;row<n;row++){
    //     //Half Pyramid
    //     for(int col=0;col<(row+1);col++){
    //         cout<<"*";
    //     }
    //     // Inverted Full Pyramid
    //     for(int col=0;col<(2*n-2*row-1);col++){
    //         cout<<" ";
    //     }
    //     //Half Pyramid
    //     for(int col=0;col<(row+1);col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    /*Fancy Pattern **************************************** */
    // for(int row=0;row<n;row++){
    //     for(int col=0 ;col<2*row+1;col++ ){
    //         if(col%2==0){
    //             cout<<row+1;
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }
    // Without odd and even
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         if(col==row+1-1){
    //             cout<<row+1;
    //         }
    //         else{
    //              cout<<row+1<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    /*Hollow Inverted Half Pyramid *************************** */
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row;col++){
    //         if(row==0 || row==n-1 || col==0 || col==n-row-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    /*Fancy Pattern **************************************** */
    // for (int row = 0; row < n; row++)
    // {
    //     // shape half pyramid
    //     int col;
    //     for (col = 0; col < row + 1; col++)
    //     {
    //         if (row == 0 || row == n - 1 || col == 0)
    //         {
    //             cout << col + 1;
    //         }
    //         else
    //         {   
    //             if(col==row+1-1){
    //        // extra column in all rows except first and last row
    //                 cout<<" "<<col+1;
    //             } 
    //             else{
    //                 cout << " ";
    //             }         
    //         }
    //     }
    //     cout << endl;
    // }


    /*Fancy Pattern **************************************** */
    // for(int row=0;row<n;row++){
    //     int col=0;
    //     char x=col+'A'-col;
    //     for(;col<row+1;col++){
    //         cout<<x++;
    //     }
    //     for(char ch=--x;ch>'A';){
    //         ch--;
    //         cout<<ch;
    //     }
    //     cout<<endl;
    // }

    /*Numeric Hollow Inverted Half Pyramid ********************* */
    // for(int row=0;row<n;row++){
    //     // for(int col=0;col<n-row;col++){
    //     //     if(col==0){
    //     //         cout<<row+1<<" ";
    //     //     } else if(row==0){
    //     //         cout<<col+1<<" ";
    //     //     } else if(col==n-row-1){
    //     //         cout<<n<<" ";
    //     //     } else{
    //     //         cout<<"  ";
    //     //     }
    //     // }
    //     for(int col=row+1;col<=n;col++){
    //         if(col==row+1 || row==0 || col==n)
    //             cout<<col<<" ";
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    /*Numeric Palindrome Equilateral Pyramid ******************* */

    //My Logic
    // int x;
    // for(int row=0;row<n;row++){
    //     x=1;
    //     //space
    //     for(int col=0;col<n-row-1;col++){
    //         cout<<" "<<" ";
    //     }
    //     // numeric
    //     for(int col=0;col<row+1;col++){
    //         cout<<x<<" ";
    //         x++;
    //     }
    //     if(row>0){
    //         //print right side palindrome
    //         x--;
    //         for(int a=x;a>1;){
    //             a--;
    //             cout<<a<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // lakshay Bhaiya
    // int k;
    // for(int row=0;row<n;row++){
    //     int c=1;
    //     k=n+row;
    //     for(int col=0;col<k;col++){
    //         if(col<n-row-1){
    //             cout<<"  ";
    //         }else {
    //             cout<<c<<" ";
    //             col <=n-1 ? c++ : c--;
    //              if(col == n-1 ){ // middle column
    //                 c = c - 2;
    //             } 
    //         }
    //     }
    //     cout<<endl;
    // }
   
   
    /*Fancy Pattern **************************************** */
    // specific pattern not a generic pattern
    // for(int row=0;row<n;row++){
    //     //print left pattern
    //     for(int col=0;col<2*n-row-2;col++){
    //         cout<<"*";
    //     }
    //     //print full pyramid
    //     for(int col=0;col<row+1;col++){
    //         if(col==row+1-1){
    //             cout<<row+1;
    //         }
    //         else{
    //             cout<<row+1<<"*";
    //         }
    //     }
    //     //print right pattern
    //     for(int col=0;col<2*n-row-2;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //Lakshay bhaiya
    // assert(n<=9); if input is greater than 9 then program is aborted
    // if(n>9){
    //     return 0;
    // }
    // for(int row=0;row<n;row++){
    //     int start_num_index=8-row;
    //     int num=row+1;
    //     int countNum=num;
    //     for(int col=0;col<17;col++){  
    //         //start printing number
    //         if(col==start_num_index && countNum>0){
    //             cout<<num;
    //             countNum--;
    //             start_num_index+=2;
    //         }else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    /*Solid Half Diamond ************************************** */
   
   //     for(int row=0;row<n;row++){
//         //half pyramid
//         for(int col=0;col<row+1;col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//    for(int row=0;row<(2*n-1)-n;row++){
//         //inverted Half pyramid
//         for(int col=0;col<n-row-1;col++){
//             cout<<"*";
//         }
//         cout<<endl;
//    }

   //Another way
//     for(int row=0;row<(2*n-1);row++){
//         int cond=0;
//         if(row<n){
//             // growing phase of dimaond
//             cond=row+1;
//         }
//         else{       
//             //shrinking phase of diamond 
//             cond = 2*n-row-1;
//         }
//         for(int col=0;col<cond;col++){
//             cout<<"*";
//             }
//         cout<<endl;
//    }


    /*Floyd Triangle ************************************** */
    // int x=1;
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         cout<<x++<<" ";
    //     }
    //     cout<<endl;
    // }

    /*Butterfly Pattern ************************************** */

    
    // upper part
    for(int row=0;row<n;row++){
        //print half pyramid
        for(int col=0;col<row+1;col++){
            cout<<"*";
        }
        //print inverted full pyramid
        for(int col=0;col<2*n-2*row-2;col++){
            cout<<" ";
        }
        //print half pyramid
        for(int col=0;col<row+1;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    // lower part 
    for(int row=0;row<n;row++){
         //print inverted half pyramid
         for(int col=0;col<n-row;col++){
            cout<<"*";
         }
         //print full pyramid
         for(int col=0;col<2*row;col++){
            cout<<" ";
         }         
         //print inverted half pyramid
         for(int col=0;col<n-row;col++){
            cout<<"*";
         }
         cout<<endl;
    }

return 0;
}


