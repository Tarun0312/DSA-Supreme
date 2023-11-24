// https://leetcode.com/problems/min-stack/

// class MinStack {
// public:
//     vector<pair<int,int>> st;
//     MinStack() {
        
//     }
    
//     //  Methods pop, top and getMin operations will always be called on non-empty stacks.
//     //so need to check underfloe condition
//     //there is no overflow bcoz we are using vector for implementation od minstack
//     void push(int val) {
//         if(st.empty()){
//             //insertion in empty stack

//             pair<int,int> p;
//             p.first = val;
//             p.second = val;//1 element of stack mei val hi minimum hai
//             st.push_back(p);
//         }else{
//             //insertion in non-empty stack

//             pair<int,int> p;
//             p.first = val;
//             int rightMostPairMin = st.back().second;
//             p.second = min(val,rightMostPairMin);

//             st.push_back(p);
//         }
//     }
    
//     void pop() {
//         //remove rightmost element
//        st.pop_back();
//     }
    
//     int top() {
//         int topElement = st.back().first;
//         return topElement;
//     }
    
//     int getMin() {
//         int minElement = st.back().second;
//         return minElement;
//     }
//     // TC -> of all operations/function-> O(1) 

// };

// /**
//  * Your MinStack object will be instantiated and called as such:
//  * MinStack* obj = new MinStack();
//  * obj->push(val);
//  * obj->pop();
//  * int param_3 = obj->top();
//  * int param_4 = obj->getMin();
//  */