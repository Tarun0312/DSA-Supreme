#include<iostream>

using namespace std;


//Heap -> is a complete binary tree + follow heap property
//heap property
// Parent node hmesha child node se bdi hogi -> max heap
// Parent node hmesha child node se chhoti hogi -> min heap

// Heap  -> visulaize -> using tree
//implement using array

//application -> max element,min element in array find in O(1)

//implenting max heap

class Heap{

    public :
    int * arr;
    int capacity;//capacity of heap
    int size ; //current number of elements in heap

    Heap(int capacity){
        this->arr = new int[capacity];
        this->capacity=capacity;
        this->size = 0;//initial size of heap
    }

    void insert(int val){

        //overflow
        if(size==capacity){
            cout<<"Heap Overflow"<<endl;
            return;
        }
        //size increase hoga 1 based indexing se kr rhe hai
        size++;
        int index = size;
        arr[index] = val;

        // Is algo Mei agr koi element api position claim krne  upar se niche ya niche se par toh who heapification hai
        //take the value to it's correct position
        while(index>1){
            //1 not included bcoz (1) root se upar kahan hi jaayenge

            int parentIndex = index/2;

            if(arr[index] > arr[parentIndex]){
                swap(arr[index],arr[parentIndex]);
                index = parentIndex; //upar bhi jaana hai compare ke liye so update index
            }else{
                break;
            }
        }

        //TC -> O(logn) -> complete binary tree
        //Sc -> O(1)
    }  


    //Deletion from heap

    int deleteFromHeap(){
        //hmesha root node delete hogi heap mei

        //step1 : replace root node with rightmost node(last node)
        //step2 : delete last node
        //step3 : heapification

        int ans = arr[1];

        //Replacement of root node with rightmost node(last node)
        arr[1] = arr[size];

        //last element ko delete kro uski original position se
        size--;

        int index = 1;

        while(index<size){
            //size included nhi hai bcoz rightmost node mei heapify ki need nhi hai
            
            //leftchildIndex and rightChildIndex
            int leftIndex = 2*index;
            int rightIndex = 2*index+1;

            //find out krna hai sbse bda kon hai
            int largestKaIndex = index;

            if(leftIndex<=size && arr[largestKaIndex]<arr[leftIndex]){
                largestKaIndex = leftIndex;
            }

            if(rightIndex<=size && arr[largestKaIndex]<arr[rightIndex]){
                largestKaIndex = rightIndex;
            }

            if(index==largestKaIndex){
                //no change
                break;
            }else{
                swap(arr[index],arr[largestKaIndex]);
                index = largestKaIndex;
            }
        }

        return ans;
        //TC -> O(logn) -> complete binary tree
        //Sc -> O(1)
    }


    void printHeap(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }   
    }

};

//same code of deletion using recursion
void heapify(int* arr,int size,int index){
    int leftIndex = 2*index;
    int rightIndex = 2*index+1;
    int largestKaIndex = index;

    //teeno mei se max lao
    if(leftIndex<=size && arr[leftIndex]>arr[largestKaIndex]){
        largestKaIndex = leftIndex;
    }

    if(rightIndex<=size && arr[rightIndex]>arr[largestKaIndex]){
        largestKaIndex = rightIndex;
    }

    //after these 2 conditions largestIndex wilbe pointing to the largest eleemnt among these three

    //base case yhi sambhal lega
    if(index!=largestKaIndex){
        swap(arr[index],arr[largestKaIndex]);

        //baaki recursion dekh lega
        heapify(arr,size,largestKaIndex);
    }

    //tc -> O(logn)
    //sc-> O(logn)
}


void buildHeap(int* arr,int n){
    //i=n/2 se initialize ki bcoz n/2+1 se n tk leaf nodes hongi unhe heapify krne ki need nhi hai
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }

    //tc -> O(n)
    //sc->O(1)
}

void heapSort(int* arr,int n){
    //step 1-> build array into max heap
    //step1: first and last element ko swap kro
    //step2: last  ke element  sort ho gye so unko heapigfy ke liye consider mt kro,
    //size-- kro 
    //single element sorted hota hai toh ruk jao
    //step3 : heapify

    while(n!=1){
        swap(arr[1],arr[n]);
        n--;
        heapify(arr,n,1);
    }
    // tc-> O(NLOGN)
    //sc-> O(logn) recursion stack
}

int main(){

    // Heap h(10);

    // h.insert(5);
    // h.insert(20);
    // h.insert(10);
    // h.insert(16);
    // h.insert(3);
    // cout<<"Printing Heap: ";
    // h.printHeap();

    // int ans = h.deleteFromHeap();
    // cout<<"Ans: "<<ans<<endl;
    // cout<<"Printing Heap: ";
    // h.printHeap();


    // int arr[] = {-1,12,50,60,3};
    // int n = 4;
    // heapify(arr,n,1);

    // for(int i=1;i<=n;i++){
    //     cout<<arr[i]<<" ";
    // }

    int arr[] = {-1,12,50,60,3};
    int n = 4;
    buildHeap(arr,n);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\nAfter Sorting: "<<endl;


    heapSort(arr,n);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }

   
    return 0;
}