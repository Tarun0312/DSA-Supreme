#include<iostream>

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

//create a tree and return it's root node
Node* createTree(){
    
    int data;
    //1 node hum insert krenge
    cout<<"Enter the data to insert: ";
    cin>>data;
    cout<<endl;

    if(data==-1){
        return NULL;
    }
    Node* root = new Node(data);
    
    //left subtree (using recursion)
    cout<<"Data to insert at left "<<data<<endl;
    root->left = createTree();

    //rightSubtree (using recursion)
    cout<<"Data to insert at right "<<data<<endl;
    root->right =createTree();

    return root;
}

int main(){

    Node* root = createTree();
    cout<<root->data;
    return 0;
}