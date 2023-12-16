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

Node* constructTreeFromPostOrderAndInOrderTraversal(map<int,int>& mapElementToIndex,int* postOrder,int inOrder[],int & postOrderIndex,int inOrderStart,int inOrderEnd,int size){

    //base case 
    //invalid array
    if(postOrderIndex<0 || inOrderStart>inOrderEnd) return NULL;

    //1 case hum solve krenge
    //postorder ka last element root hoga gurantee hai
    int element = postOrder[postOrderIndex];
    postOrderIndex--;

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

    //right tree and left tree recursion dekhega
    //baaki recursion sambhal lega

    

    root->right = constructTreeFromPostOrderAndInOrderTraversal(mapElementToIndex,postOrder,inOrder,postOrderIndex,position+1,inOrderEnd,size);

    root->left = constructTreeFromPostOrderAndInOrderTraversal(mapElementToIndex,postOrder,inOrder,postOrderIndex,inOrderStart,position-1,size);

    return root;

    //tc -> O(n)
    //sc -> O(n)
}

int main(){

    int inOrder[] = {8,14,6,2,10,4};
    int postOrder[] = {8,6,14,4,10,2};
    int size = 6;
    int postOrderIndex = size-1;
    int inOrderStart = 0;
    int inOrderEnd = size - 1;
    map<int,int> mapElementToIndex;
    createMapping(inOrder,size,mapElementToIndex);

    Node* root = constructTreeFromPostOrderAndInOrderTraversal(mapElementToIndex,postOrder,inOrder,postOrderIndex,inOrderStart,inOrderEnd,size);
    cout<<"Printing tree\n";
    levelOrderTraversal(root);

    return 0;
}