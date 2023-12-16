#include<iostream>
#include<queue>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int searchElementInOrder(int inOrder[],int size,int target){
    for(int i=0;i<size;i++){
        if(target==inOrder[i]){
            return i;
        }
    }
    //this will never execute bcoz target is always present in order
    return -1;

    //tc -> O(n)
    //sc-> O(1)
    //use map for O(1) search
}

void levelOrderTraversal(Node* root){

    queue<Node*> q;

    //maintain initial state of queue
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* front = q.front();
        q.pop();

     
        if(front==NULL){
            //null
            cout<<endl;
            if(!q.empty()) q.push(NULL);
        }else{
            cout<<front->data<<" ";
            //valid node-> push child of curr node
            if(front->left!=NULL) q.push(front->left);
            if(front->right!=NULL) q.push(front->right);
        }
    }
}

void createMapping(int inOrder[],int size,map<int,int>& mapElementToIndex){
    for(int i=0;i<size;i++){
        int element = inOrder[i];
        int index = i;
        mapElementToIndex[element] = index;
    }
}

Node* constructTreeFromPreOrderAndInOrderTraversal(map<int,int>& mapElementToIndex,int* preOrder,int inOrder[],int & preOrderIndex,int inOrderStart,int inOrderEnd,int size){

    //base case 
    //invalid array
    if(preOrderIndex>=size || inOrderStart>inOrderEnd) return NULL;

    //1 case hum solve krenge
    //preorder ka first element root hoga gurantee hai
    int element = preOrder[preOrderIndex];
    preOrderIndex++;

    //create root
    Node* root = new Node(element);

    //seach node in inorder and find position
    // ******************************************************

    //heavy operation takes O(n) Time complexity
    // int position = searchElementInOrder(inOrder,size,element); 

    //use map for O(1) search
    int position = mapElementToIndex[element];

    //position ka left (inorderstart to position-1) left subtree hoga
    //position ka right (position+1 to inorderEnd) right subtree hoga

    //left and right tree recursion dekhega
    //baaki recursion sambhal lega

    root->left = constructTreeFromPreOrderAndInOrderTraversal(mapElementToIndex,preOrder,inOrder,preOrderIndex,inOrderStart,position-1,size);

    root->right = constructTreeFromPreOrderAndInOrderTraversal(mapElementToIndex,preOrder,inOrder,preOrderIndex,position+1,inOrderEnd,size);

    return root;
        //tc -> O(n)
    //sc -> O(n)

}

int main(){

    int inOrder[] = {10,8,6,2,4,12};
    int preOrder[] = {2,8,10,6,4,12};
    int size = 6;
    int preOrderIndex = 0;
    int inOrderStart = 0;
    int inOrderEnd = size - 1;
    map<int,int> mapElementToIndex;
    createMapping(inOrder,size,mapElementToIndex); 
    Node* root = constructTreeFromPreOrderAndInOrderTraversal(mapElementToIndex,preOrder,inOrder,preOrderIndex,inOrderStart,inOrderEnd,size);
    cout<<"Printing tree\n";
    levelOrderTraversal(root);

    return 0;
}