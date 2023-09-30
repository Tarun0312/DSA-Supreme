#include<iostream>

using namespace std;

void printVector(vector<int> a){

  
    for(auto it : a){
        cout<<it<<" ";
    }
    cout<<endl;
}


void negativeToTheLeftAndPositiveToTheRight(vector<int>& arr){
    // order not preserved
    // //one variable is pointing to starting and other is to the end
    int left = 0; //track the index where -ve elements to be stored
    int right = arr.size()-1; //track the index where +ve elements to be stored
    while(left<right){
        while(arr[left]<0){
            left++;
        }

        while(arr[right]>0){
            right--;
        }

        if(left<right){
            swap(arr[left],arr[right]);
        }

    }
    // TC-> O(N*N)
    // SC-> O(1)

    //Dutch National Flag Algorithm || Two pointer
    //order not preserved
    // int left =0,right = arr.size()-1;
    // while(left<=right){
    //     if(arr[left]<0){
    //         left++;
    //     }else if(arr[right]>0){
    //         right--;
    //     }else{
    //         //left pr +ve hai right pr -ve hai toh swap kro
    //         swap(arr[left],arr[right]);
    //     }
    // }
    // TC-> O(N)
    // SC-> O(1)
}



void negativeToTheLeftWithOneVariable(vector<int>& arr){
    //index is used to traverse the whole array and negativeElmentIndex track the index where -ve element needs to be stored


    int size = arr.size();
    int negativeElementIndex = 0;
    for(int index = 0;index<size;index++){
        if(arr[index]<0){
            swap(arr[index],arr[negativeElementIndex]);
            negativeElementIndex++;
        }
    }

}

// TC-> O(N)(easy method)
// SC-> O(1)



int main(){

    vector<int> arr{23,-7,12,-10,-11,40,60};

    printVector(arr);
    negativeToTheLeftAndPositiveToTheRight(arr);
    printVector(arr);

    // printVector(arr);
    // negativeToTheLeftWithOneVariable(arr);
    // printVector(arr);
  
    return 0;
}