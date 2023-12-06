#include<iostream>
#include<queue>
using namespace std;

//i.p 12 3 4 5 6 7 8 9
//o/p 12 5 3 7 4 8 5 9
void interleaveQueue(queue<int>& first){

    //divide the even length in two parts
    //PUT FIRST HALF OF FIRST QUEUE IN SECOND QUEUE

    int n = first.size();
    queue<int> second;

   for(int i=0;i<n/2;i++){
    int element = first.front();
    first.pop();

    second.push(element);
   }

   //Merge both the halves into original queue named as first
   for(int i=0;i<n/2;i++){
    int element1 = second.front();
    second.pop();

    first.push(element1);

    int element2 = first.front();
    first.pop();

    first.push(element2);

   }
}
//tc -> O(n)
// sc-> O(n)


int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    interleaveQueue(q);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}