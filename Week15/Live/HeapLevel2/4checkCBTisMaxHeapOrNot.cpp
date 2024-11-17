#include<iostream>

using namespace std;

class Info{
    public:
        int maxVal;
        bool isHeap;

        Info(int a,bool b){
            this->maxVal = a;
            this->isHeap = true;
        }
};

Info checkMaxHeap(Node* root){
    
    //empty root
    if(!root){
        Info temp = new Info(INT_MIN,true);
        return temp;
    }

    //leaf node
    if(!root->left && !root->right){
        Info temp = new Info(root->data,true);
        return temp;
    }

//baaki recursion dekh lega
   Info leftAns = checkMaxHeap(root->left);
   Info rightAns = checkMaxHeap(root->right);

   //1 case mujhe solve krna hai
   if(leftAns->isHeap && rightAns->isHeap && (root->maxVal>leftAns->maxVal)&&(root->maxVal > rightAns->maxVal)){
    Info temp = new Info(root->maxVal,true);
    return temp;
   }
    int maximum = max(root->data,max(leftAns->maxVal,rightAns->maxVal));
    Info temp = new Info(maximum,false);
    return temp;
}

int main(){


    return 0;
}