#include<iostream>
#include<queue>
using namespace std;

class Info{
    public:
        int data;
        int rowIndex;
        int colIndex;
        Info(int data,int row,int col){
            this->data = data;
            this->rowIndex=row;
            this->colIndex=col;
        }
};

class Compare{
    public:
    bool operator()(Info* a,Info* b){
        return a->data > b->data; //min heap true ke case b ko top pr rkhenege
        //false ke case a ko consider (top pr rkhenege) krenge
        
        //< max heap
    }
};

void mergeKSortedArrays(int arr[][4],int n,int k,vector<int>& ans){

    //step 1 : store first elements of k arrays in min heap
    // step2 : pop top element of min heap and move to next elemenet of that array ,so we have to maintain rowIndex,colIndex so we use a extra data structure

    priority_queue<Info*,vector<Info*>,Compare> pq;
    Info* temp = NULL;
    //write compare class on which basis data is to be compared (on the basis of data varaiable of info class)

    // store first elements of k arrays in min heap
    for(int row=0;row<k;row++){
        int element = arr[row][0];
        temp = new Info(element,row,0);
        pq.push(temp);
    }

    while(!pq.empty()){
        Info* top = pq.top();
        pq.pop();

        int topData = top->data;
        int topRow = top->rowIndex;
        int topCol = top->colIndex;

        //store in ans vector
        ans.push_back(topData);

        //push in min heap next element for the same row,jisme(array) se pop kiya hai
        //usmei se insert bhi krna hai
        if(topCol+1<n){
            //iska matlab row mei abhi element present hai
           temp = new Info(arr[topRow][topCol+1],topRow,topCol+1);
            pq.push(temp);
        }
    }

    //prevents memory leak
    delete temp;
}


// using SMA
// void mergeKSortedArrays(int arr[][4],int n,int k,vector<int>& ans){

//     //step 1 : store first elements of k arrays in min heap
//     // step2 : pop top element of min heap and move to next elemenet of that array ,so we have to maintain rowIndex,colIndex so we use a extra data structure

//     priority_queue<Info,vector<Info>,Compare> pq;
  
//     //write compare class on which basis data is to be compared (on the basis of data varaiable of info class)

//     // store first elements of k arrays in min heap
//     for(int row=0;row<k;row++){
//         int element = arr[row][0];
//         Info temp = Info(element,row,0);
//         pq.push(temp);
//     }

//     while(!pq.empty()){
//         Info top = pq.top();
//         pq.pop();

//         int topData = top.data;
//         int topRow = top.rowIndex;
//         int topCol = top.colIndex;

//         //store in ans vector
//         ans.push_back(topData);

//         //push in min heap next element for the same row,jisme(array) se pop kiya hai
//         //usmei se insert bhi krna hai
//         if(topCol+1<n){
//             //iska matlab row mei abhi element present hai
//             Info temp = Info(arr[topRow][topCol+1],topRow,topCol+1);
//             pq.push(temp);
//         }
//     }

   
// }

int main(){

    int arr[3][4] = {
        {1,3,4,5},
        {2,4,5,6},
        {6,7,8,9},
    };

    int n=4,k=3;

    vector<int> ans;
    mergeKSortedArrays(arr,n,k,ans);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}