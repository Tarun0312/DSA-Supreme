// https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

// // void diagonalTraversal(Node* root,map<int,vector<int>>& hdToValueMap,int hd){
    
// //     //base case
// //      if(root==NULL) return ; 
     
     
// //      //consider hd of root =0 ,
// //      //left mei jaayenge then +1,
// //      //right mei do nothing
    
// //     //1 case hum solve krenge
// //     int currElement = root->data;
// //     hdToValueMap[hd].push_back(currElement);
    
// //     //baaki recursion dekh lege
// //     //left call
// //     diagonalTraversal(root->left,hdToValueMap,hd+1);
    
// //     //right call
// //     diagonalTraversal(root->right,hdToValueMap,hd);
    
// // }

// // vector<int> diagonal(Node *root){
// //   // your code here
   
// //   map<int,vector<int>> hdToValueMap;
// //   int hd = 0;
// //   diagonalTraversal(root,hdToValueMap,hd);
// //   vector<int> ans;
// //   for(auto i : hdToValueMap){
    //   for(auto j : i.second)
    //   ans.push_back(j);
// //   }
// //   return ans;
// //   //tc -> O(nlogn) map mei push krne ki tc O(logn)
// //   //sc -> O(n) map used + recursion
// // }



// // *******************************************
// //more optimised
// //intution -> 
// //store root element in queue intitaly to maintain state of queue
// //temp = front OfQueue
// //queue ka front access kro print kro and uske(tree) ke right child ko pehle 
// //print kro agar koi left child milta hai then push in queue baad mei dekhenge 
// //jb temp ==NULL ho jaaye then ruk jao

// vector<int> diagonal(Node *root){
    
//     //queuue ke element ko pick kro,uske right ke child ko ans mei daalo
//     //agr koi left child milta hai then push in queue,baad mei dekhenge usse
//     if(root==NULL) return {};

//     queue<Node*> q;
//     q.push(root);
//     vector<int> ans;
    
//     while(!q.empty()){
//         Node* temp = q.front();
//         q.pop();

//         while(temp!=NULL){
//             //pehle tree ke right child ko push kr do vector mei agr koi 
//             //left child milta hai then push in queuue
//             ans.push_back(temp->data);
//             if(temp->left!=NULL) {
//                 //baad mei dekhenge
//                 q.push(temp->left);
//             }
//             temp=temp->right;
//         }
//     }
    
//     return ans;
//     //tc -> O(n)
//     //sc -> O(n)
// }
