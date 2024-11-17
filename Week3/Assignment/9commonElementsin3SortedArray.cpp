// https://practice.geeksforgeeks.org/problems/common-elements1132/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

//{ Driver Code Starts
#include<iostream>
#include<set>
#include<vector>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:  
        
        bool elementPresent(vector<int> a,int target){
            int n= a.size();
            int s=0,e=n-1;
            
            while(s<=e){
                int m = s + (e-s)/2;
                if(a[m]==target){
                    return true;
                }else if(target>a[m]){
                    //right
                    s=m+1;
                }else{
                    //left
                    e=m-1;
                }
            }
            
            return false;
        }
        vector<int> intersection(int A[],int B[],int C[],int n1,int n2,int n3){
            
            //THREE POINTER
            int i=0,j=0,k=0;
            vector<int> ans;
            set<int> st;
            
            while(i<n1 && j<n2 && k<n3){ // ek bhi pointer agar array ke index se bahar hua toh uske baad common elements nhi milenege
            
                if(A[i]==B[j] && B[j]==C[k]){
                    //check A[i] is already present in ans or not 
                    //if present then no need to push_back
                    // if(!elementPresent(ans,A[i]))
                    //     ans.push_back(A[i]);
                    
                    // *************. OR   *****************
                    //Use set data structure which only store unique element,if try to store then duplicate elements will be discarded
                    st.insert(A[i]);
                    //******************OR. ********** REMOVE DUPLICATES FROM ARRAY
                    i++,j++,k++;
                }else if(A[i]<B[j]){//ab check kro kaunsa pointer chhoti position pr khada hai hme use same bnanai hai toh increemenent krn pdega bcoz array sorted hai 
                    i++;
                }else if(B[j]<C[k]){
                    j++;
                }else{
                    k++;
                }
               
            }
            
            for(auto it:st){
                ans.push_back(it);
            }
            return ans;
            
        }
        
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            return intersection(A,B,C,n1,n2,n3);
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends