#include<iostream>
using namespace std;

//o/p {1 5 9 10 6 23 7 11 12 8 4}

//column wise
void printWaveFormColumnWise(vector<vector<int> > a){
    int rows=a.size();
    int cols=a[0].size();

    for(int startCol=0;startCol<cols;startCol++){
        //col no == even then print Top To Bottom
        if((startCol&1)==0){
            for(int startRow=0;startRow<rows;startRow++){
                cout<<a[startRow][startCol]<<" ";
            }
        }else{
            //col no == odd then print Bottom To Top 
            for(int startRow = rows-1 ;startRow>=0;startRow--){
                cout<<a[startRow][startCol]<<" ";
            }
        }
    }
}


//o/p {1 2 3 4 8 7 6 5 9 10 11 12}
//row wise
void printWaveFormRowWise(vector<vector<int> > a){
    int rows= a.size();
    int cols= a[0].size();

    for(int i=0;i<rows;i++){
        //row no == Even no then print left to right
        if((i&1)==0){
            for(int j=0;j<cols;j++){
                cout<<a[i][j]<<" ";
            }
        }else{
        //row no == ODD no then print right to left 
            for(int j=cols-1;j>=0;j--){
                cout<<a[i][j]<<" ";
            }
        }


    }
}
int main(){

    vector<vector<int> > arr={  {1,2,3,4},
                                {5,6,7,8},
                                {9,10,11,12}
                             };


    printWaveFormColumnWise(arr);
    cout<<endl;
    printWaveFormRowWise(arr);

    return 0;
}