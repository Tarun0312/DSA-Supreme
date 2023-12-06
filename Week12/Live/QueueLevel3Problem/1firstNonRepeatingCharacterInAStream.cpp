// https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

// class Solution {
// 	public:
// 		string FirstNonRepeating(string A){
// 		    		  //  using mapping and queue
		  
// 		  //track left to right elements and store it's frequenecy
// 		  int length = A.length();
// 		  int frequency[26] = {0};
// 		  queue<char> q;
		  
// 		  string ans;
		  
// 		  for(int i=0;i<length;i++){
// 		      char ch = A[i];
		      
// 		      //store frequency
// 		      frequency[ch-'a']++;//convert character into an index
// 		      q.push(ch);
		      
// 		      //ans find
// 		      while(!q.empty()){
// 		          char frontElement = q.front();
// 		          if(frequency[frontElement-'a']>1){
// 		              //yaani yeh answer nhi hai then pop
// 		              q.pop();
// 		          }else{
// 		              //frequency 1 hi hogi (bcoz ++ kiya hai 22 line)
// 		              ans.push_back(frontElement);
// 		              break;
// 		          }
// 		      }
		      
// 		      if(q.empty()){
// 		         ans.push_back('#');
// 		      }
// 		  }
// 		  return ans;
		  
// 		  //tc -> O(n)
// 		  //sc->O(n)
// 		}

// };