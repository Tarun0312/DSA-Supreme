// 2d array initialization mei at least col  size dena pdega bcoz of col*i+j (this formula will convert 2d array in into 1d which is stored contigusoly inmemory )
// func mei jb 2d array pass krenge toh at least col  size dena pdega bcoz of col*i+j 

#include<iostream>
#include<limits.h>

using namespace std;

//rowwise print
void printArrayRowWise(int arr[][4],int row,int col){

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

//columnwise print
void printArrayColumnWise(int arr[3][4],int row,int col){
    cout<<"Printing Array Column Wise "<<endl;
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

// linear search in 2d array
bool linearSearchIn2dArray(int arr[][5],int row,int col,int target){

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}


//maximum element in 2d array
int maximumIn2dArray(int arr[][5],int row,int col){
    int maxValue = INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>maxValue)
                maxValue = arr[i][j] ;
        }
    }

    //using inbuilt maxFunction
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         maxValue = max(maxValue,arr[i][j]);
    //     }
    // }

    return maxValue;
}

//minimum element in 2d array
int minimumElementIn2dArray(int arr[][5],int row,int col){

    int minAns = arr[0][0];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] < minAns){
                minAns = arr[i][j];
            }
        }
    }

    return minAns;
}

//rowwise sum print

void printSumRowWise(int arr[][4],int row,int col){
    int sum;
    for(int i=0;i<row;i++){
        sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        cout<<"Sum for row "<<i+1<<" is "<<sum<<endl;
    }
}

//columnwise sum print

void printSumColumnwWise(int arr[][4],int row,int col){
    int sum;
    for(int i=0;i<col;i++){
        sum=0;
        for(int j=0;j<row;j++){
            sum+=arr[j][i];
        }
        cout<<"Sum for column "<<i+1<<" is "<<sum<<endl;
    }
}


//diagonal sum print
int diagonalSum(int arr[][4],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i][i];
    }
    return sum;
}

//diagonal sum print
int reverseDiagonalSum(int arr[][4],int size){
    int sum=0;
    for(int i=0;i<size;i++){
       sum+=arr[i][size-1-i];
    }
    return sum;
}


//transpose of a matrix
void transposeOfMatrix(int arr[][4],int size){

    //upper triangle proccessed/swapped
    // for(int i=0;i<size;i++){
    //     for(int j=i;j<size;j++){
    //         if(i!=j)
    //         swap(arr[i][j],arr[j][i]);
    //     }
    // }

    //lower triangle proccessed/swapped
    // for (int i=0;i<size;i++){
    //     for(int j=0;j<=i;j++){
    //         if(i!=j)
    //         swap(arr[i][j],arr[j][i]);
    //     }
    // }

    //keep track of whether we have to swap or not
    bool swap1[4][4] = {0};

    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            swap1[i][j]=1;
            if(swap1[i][j]==1){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }


}




int main(){

    // create a 2D array
    int arr0[5][5]; //[rows][columns]

    //initialisation

    int arr1[3][4] = {
                        {1,2,3,4},
                        {3,2,1,7},
                        {8,90,10,2},
                    };

    int arr2[][5] = {
                        {2,3,10,6,2},
                        {12,3,145,55,9},
                        {-2,2,31,45,13},
                        {2,-3,1,56,9},
                    };
    int row2=4,col2=5;
    // printArrayRowWise(arr2,row2,col2);

    int row1=3,col1=4;
    // printArrayColumnWise(arr1,row1,col1);


    //input 2d array
    int arr3[3][3];
    int row3=3,col3=3;

    // for(int i=0;i<row3;i++){
    //     for(int j=0;j<col3;j++){
    //         cout<<"Enter element at row "<<i<<" and column "<<j<<": "<<endl;
    //         cin>>arr3[i][j];
    //     }
    // }

    // printArrayRowWise(arr3,row3,col3);

    // linear search in 2d array
    // int target = 156;
    // cout<< ( linearSearchIn2dArray(arr2,row2,col2,target) ? ("Found") :("Not Found") );
    

    // //maximum element in 2d array
    // cout<<"Max value: "<<maximumIn2dArray(arr2,row2,col2);

    // //minimum element in 2d array
    //  cout<<"Min value: "<<minimumElementIn2dArray(arr2,row2,col2);


    //print sum rowwise
    // printSumRowWise(arr1,row1,col1);

    //print sum columnwise
    // printSumColumnwWise(arr1,row1,col1);

    // print diagonal sum ,so we need square matrix (row==col)
     int arr4[4][4] = {
                        {1,2,3,4},
                        {3,2,1,7},
                        {8,90,10,2},
                        {1,23,3,3}
                    };
    int size=4;

    //  print diagonal sum
    // cout<<diagonalSum(arr4,size);

    //  print reverse diagonal sum
    // cout<<reverseDiagonalSum(arr4,size);

    cout<<"Before Transpose ,array: \n";
    printArrayRowWise(arr4,size,size);

    cout<<"After Transpose ,array: \n";
    transposeOfMatrix(arr4,size);
    printArrayRowWise(arr4,size,size);

 
    return 0;

}