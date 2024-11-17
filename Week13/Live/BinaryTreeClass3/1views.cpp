#include<iostream>
#include<queue>
#include<map>
using namespace std;

class Node{
    public:
        int data;
        Node* left,*right;

        Node(int data){
            this->data = data;
            this->left=this->right=NULL; 
        }

};

Node* constructTree(){
    int data;
    cout<<"Enter the value: ";
    cin>>data;

    if(data==-1) return NULL;

    //1 case hum solve krenge
    Node* root = new Node(data);

    cout<<"Data at the left of "<<data<<endl;
    root->left = constructTree();

    cout<<"Data at the right of "<<data<<endl;
    root->right = constructTree();

    return root;
}

void preOrderTraversal(Node* root){
    if(root==NULL) return;

    cout<<root->data;
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node* root){
    if(root==NULL) return;

 
    inOrderTraversal(root->left);
    cout<<root->data;
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){
    if(root==NULL) return;

 
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data;
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node* front = q.front();
        q.pop();

        if(front==NULL){
            cout<<endl;
            if(!q.empty())
                q.push(NULL);
        }else{
            //valid node

            cout<<front->data<<" ";

            if(front->left!=NULL) q.push(front->left);
            if(front->right!=NULL) q.push(front->right);
        }
    }
    
}







//left view
//approach 1 using level order -> har level ki first node
void printLeftView(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    bool flag = true;
    while (!q.empty())
    {   
        //number of nodes at the current level
        int n = q.size();

        //print left most node at each level
        // for(int i=1;i<=n;i++){
            Node* front = q.front();
            q.pop();

            if(front==NULL){
                flag = true;
                if(!q.empty()){
                    q.push(NULL);
                }
            }
            else{
                //valid node
                // if(i==1)
                if(flag==true){
                    cout<<front->data<<" ";
                    flag = !flag;
                    }
                if(front->left!=NULL) q.push(front->left);
                if(front->right!=NULL) q.push(front->right);
            }
        // }
        
    }
    
}
//tc -> O(n) sc->O(max no of nodes in a level)

//approach 2 using recursion
void printLeftViewUsingRecursion(Node* root,int level,vector<int>& leftView){
    //base case
    if(root==NULL) return;

    if(level == leftView.size()){
        //iska matlab left view ki node mil gyi hai store kr lo
        leftView.push_back(root->data);
    }

    printLeftViewUsingRecursion(root->left,level+1,leftView);
    printLeftViewUsingRecursion(root->right,level+1,leftView);

}







void printRightView(Node* root,int level,vector<int>& rightView){

    //base case
    if(root==NULL) return ;

    if(rightView.size()==level){
        //iska matalb right view ki node mil gyi store kr lo
        rightView.push_back(root->data);
    }

    printRightView(root->right,level+1,rightView);
    printRightView(root->left,level+1,rightView);
}





void printTopView(Node* root){
    //using level order traversal
    
    map<int,int> hdToNodeMap; //top
    queue<pair<Node*,int> > q;

    //initial state of queue
    q.push(make_pair(root,0));

    while(!q.empty()){
        pair<Node*,int> temp= q.front();
        q.pop();

        Node* frontNode = temp.first;
        int hd = temp.second;

        //if there is no entry for hd in map,then create a  new entry
        if(hdToNodeMap.find(hd) == hdToNodeMap.end()){
            hdToNodeMap[hd]=frontNode->data;
        }

        //now push child if exist
        if(frontNode->left!=NULL) q.push(make_pair(frontNode->left,hd-1));
        if(frontNode->right!=NULL) q.push(make_pair(frontNode->right,hd+1));
    }

    for(auto i : hdToNodeMap) cout<<i.second<<" ";
}


void printBottomView(Node* root){
//using level order traversal
    
    map<int,int> hdToNodeMap; //top view in second
    queue<pair<Node*,int> > q;

    //initial state of queue
    q.push(make_pair(root,0));

    while(!q.empty()){
        pair<Node*,int> temp= q.front();
        q.pop();

        Node* frontNode = temp.first;
        int hd = temp.second;

        //overwrites answers so that deeper nodes can be stored
        hdToNodeMap[hd]=frontNode->data;
 

        //now push child if exist
        if(frontNode->left!=NULL) q.push(make_pair(frontNode->left,hd-1));
        if(frontNode->right!=NULL) q.push(make_pair(frontNode->right,hd+1));
    }

    for(auto i : hdToNodeMap) cout<<i.second<<" ";

}


//boundary traversal
//3 parts
//part 1 printLeftBoundary

void printLeftBoundary(Node* root){
    //print left boundary above the leaf node(except leaf node)
    if(root==NULL) return;

    //leaf node pr print nhi krna
    if(root->left==NULL && root->right==NULL) return;

    cout<<root->data<<" ";
    //agar left mei jaana possible hai toh left jao,warna right mei jaao
    if(root->left!=NULL){
        printLeftBoundary(root->left);
    }else{
        printLeftBoundary(root->right);
    }
}

//part2
void printLeafBoundary(Node* root){
    if(root==NULL) return;

    //leaf node
    if(root->left==NULL && root->right==NULL){
        cout<<root->data<<" ";
    }
    printLeafBoundary(root->left);
    printLeafBoundary(root->right);
}

//part3 
void printReverseRightBoundary(Node* root){
    //print right ka matter except leaf node in reverse
    if(root==NULL) return;


    //leaf node pr print nhi krna
    if(root->left==NULL && root->right==NULL) return;

    //agar right mei jaana possible toh right mei jao,wrna left mei jao
    if(root->right!=NULL){
        printReverseRightBoundary(root->right);
    }else{
        printReverseRightBoundary(root->left);
    }
    //reverse mei print krna hai (baad mei)
    cout<<root->data<<" ";
}


void boundaryOrderTraversal(Node* root){
    // if(root==NULL) return;
    // printLeftBoundary(root);
    // printLeafBoundary(root);
    // //root 2 baar print ho jaayega use handle kro
    // if(root->right!=NULL)
    //      printReverseRightBoundary(root->right);
    // else    
    //     printReverseRightBoundary(root->left);


    //other way -> optimised
    if(root==NULL) return;
    cout<<root->data<<" ";
    printLeftBoundary(root->left);
    printLeafBoundary(root->left);
    printLeafBoundary(root->right);
    printReverseRightBoundary(root->right);
}   
int main(){

    Node* root = constructTree();
    // 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 42 -1 -1 113 -1 -1
    cout<<"Print Tree"<<endl;
    levelOrderTraversal(root);

    vector<int> ans;
    // cout<<"Printing left view\n";
    // printLeftView(root);
    // // printLeftViewUsingRecursion(root,0,ans);

    // for(auto i : ans) cout<<i<<" ";


    // cout<<"Printing right view"<<endl;
    // printRightView(root,0,ans);
    // for(auto i : ans) cout<<i<<" ";

    // cout<<"Printing top view"<<endl;
    // printTopView(root);


    // cout<<"Printing Bottom view"<<endl;
    // printBottomView(root);

    cout<<"Printing Boundary order traversal "<<endl;
    // 10 20 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 115 -1 -1
    boundaryOrderTraversal(root);
    return 0;
}