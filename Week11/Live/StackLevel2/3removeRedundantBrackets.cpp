#include<iostream>
#include<stack>

using namespace std;

bool removeRedundantBrackets(string s){

    int length = s.length();
    stack<char> st;
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        if(ch=='(' || ch=='+' || ch == '-' || ch == '*' || ch=='/'){
            st.push(ch);
        }else if(ch==')'){
            //closing brackets 
            //count operators
            int operatorCount = 0;
            while(!st.empty() && st.top()!='('){
                char temp = st.top();
                if(temp=='+' || temp=='-' || temp=='*' || temp=='/')
                    operatorCount ++;
                st.pop();
            }
            //stack empty nhi hua hoga abhi tk bcoz question mei given hai paranthesis balanced hai
            //yahan pr tabhi pahuchoge jab stack ka top element opening bracket '(' hoga
            st.pop();
            if(operatorCount == 0){
                // RedundantBrackets present 
                return 1;
            }
        }
    }
    //  yahan tk pahuche hai iska malab RedundantBrackets not present agar present hote toh return 1 run ho chuka hota
    //or we can say mai agr yahan tk pahucha toh hr bracket ke pair ke bich mei at least 1 operator pakka mila hoga
    return false;
}

  //tc -> O(n)
//sc -> O(n)
int main(){
    string str = "(((a+b)*(c+d)))";
    bool ans = removeRedundantBrackets(str);

    if(ans == 1){
        cout<<"Redundant Brackets Present"<<endl;
    }else{
        cout<<"Redundant Brackets Not Present"<<endl;
    }

    return 0;
}