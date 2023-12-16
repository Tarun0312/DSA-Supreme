#include<iostream>
#include<queue>

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

    //base case
    if(data==-1){
        return NULL;
    }

    //step1: create root node
    Node* root = new Node(data);
    
    //step2: create left subtree (using recursion)
    cout<<"Data to insert at left "<<data<<endl;
    root->left = createTree();

    //step3: create rightSubtree (using recursion)
    cout<<"Data to insert at right "<<data<<endl;
    root->right =createTree();

    return root;
}

void preOrderTraversal(Node* root){

    //base case
    if(root == NULL){
        return;
    }
    //NLR
    //N -> print current node
    cout<<root->data<<" ";

    //L->Left part
    preOrderTraversal(root->left);

    //R->right part
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node* root){
    //base case
    if(root==NULL){
        return;
    }

    //LNR

    //L
    inOrderTraversal(root->left);

    //N
    cout<<root->data<<" ";

    //R
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){
    //base case
    if(root==NULL){
        return;
    }

    //LRN
    //L
    postOrderTraversal(root->left);

    //R
    postOrderTraversal(root->right);

    //N
    cout<<root->data<<" ";
}
//for all traversal->
    //tc -> O(n)
    //sc -> O(n)

void levelOrderTraversal(Node* root){
    //print level 0,level 1 ,level2 ... -> bfs
    queue<Node*> q;
    //maintain initial state of queue
    q.push(root);
    q.push(NULL);

    //NULL milne ka matlab 
    //new line print kro aur
    //ek level complete ho gya hai,root ke saare child queue mei hai

    while(!q.empty()){

        Node* frontNode = q.front();
        q.pop();

        
        if(frontNode==NULL){
            //null
            cout<<endl;
            if(!q.empty())
                q.push(NULL);
        }
        else{
            //step1: print front node
            cout<<frontNode->data<<" ";

            //step2: push child of front node in queue
            //valid node
            if(frontNode->left !=NULL)
                q.push(frontNode->left);
            if(frontNode->right !=NULL)
                q.push(frontNode->right);
        }
    }

    //tc -> O(n)
    //sc -> O(max no of children in a level)
}
int main(){

    Node* root = createTree();
    // cout<<root->data;
    cout<<"PreOrder Traversal : "<<endl;
    preOrderTraversal(root);
    cout<<endl;

    cout<<"InOrder Traversal: "<<endl;
    inOrderTraversal(root);
    cout<<endl;

    cout<<"PostOrder Traversal: "<<endl;
    postOrderTraversal(root);
    cout<<endl;

    cout<<"Level Order Traversal: "<<endl;
    levelOrderTraversal(root);
    cout<<endl;
    return 0;
}