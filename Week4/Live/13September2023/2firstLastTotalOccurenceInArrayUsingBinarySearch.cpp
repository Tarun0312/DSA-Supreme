#include<iostream>

using namespace std;

// first Occurence Index In Array Using BinarySearch

// i.p 10,10,20,20,30,30,30,40,40,50,50,60,60,60,70,70 target=20
//o/p 2

// i.p 10,10,20,20,30,30,30,40,40,50,50,60,60,60,70,70 target=30
//o/p 4

int firstOccurenceInArray(vector<int> a,int target){
   
//    firstOccurence - left mei hogi yeh surety hai 

   int n = a.size();
   int start = 0;
   int end = n - 1;
   int mid = start + (end - start)/2;//to avoid integer overflow
   int ans = -1;

   while(start<=end){
    if(target == a[mid]){
        //ans store
        ans = mid;
        //left mei milega(first occuremce chhiye) agar aur occurence hogi toh
        end = mid - 1;
    }else if(target > a[mid]){
        // right mei jao
        start = mid + 1;
    } else if(target < a[mid]){
        // left mei jao
        end = mid - 1;
    }   
    //Always remember to perform this step
    mid = start + (end - start)/2;
   }
   
  return ans;
}

//TC -> O(logn)
//SC-> O(1)



// last occurence index in  array
// i.p 10,10,20,20,30,30,30,40,40,50,50,60,60,60,70,70 target=30
//o/p 6

int lastOccurenceInArray(vector<int> arr,int target){
    // last occurence -> right mei milegi


    int ans = -1;
    int n = arr.size();
    int start = 0;
    int end = n - 1;

    while(start<=end){
        int mid = start + (end-start)/2;

        if(target == arr[mid]){
            //ans store kro
            ans = mid;
            // right mei jaane ke liye
            start = mid + 1;
        }else if(target > arr[mid]){
            //right mei jao
            start = mid + 1;
        }else if(target < arr[mid]){
            // left mei jao
            end = mid - 1;
        }

    }

    return ans;
}

//TC -> O(logn)
//SC-> O(1)


// count total Occurence of an element in an array
// i.p 10,10,20,20,30,30,30,40,40,50,50,60,60,60,70,70 target=40
//o/p 2

// total Occurence  = lastOccurence - FirstOccurence + 1
int countTotalOccurence(vector<int> arr,int target){
    int firstOccurence = firstOccurenceInArray(arr,target);
    int lastOccurence = lastOccurenceInArray(arr,target);

    int totalOccurence = lastOccurence - firstOccurence + 1;

    return totalOccurence;
}

int main(){

    vector<int> arr{10,10,10,10,10,10,30,40,40,50,50,60,60,60,70,70};

    int firstOccurenceIndex = firstOccurenceInArray(arr,50);
    cout<< firstOccurenceIndex << endl ;

    int lastOccurenceIndex = lastOccurenceInArray(arr,50);
    cout<< lastOccurenceIndex << endl ;

    cout<< countTotalOccurence(arr,30)<< endl ;
    return 0;
}