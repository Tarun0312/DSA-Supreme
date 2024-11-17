#include<iostream>

using namespace std;

//map -> data structure wich is used to store key value


//unordered map -> why insertion,deletion,searching in O(1) unordered map implement using arrays
//ordered map -> O(logn) implement using balanced bst -> sorted on the basis of key

int main(){

    // map creation 
    unordered_map<string,int> mapping = {
        {"bb",2},
        {"cc",3}
    };

    //insertion 
    pair<string,int> p=make_pair("a",2);
    pair<string,int> q;
    q.first = "love";
    q.second= 2;
    pair<string,int> r;

    //insertion 
    mapping.insert(p);
    mapping.insert(q);
    mapping.insert(r);

    mapping["tarun"] = 40;

    //ACCESS
    cout<<mapping.at("love")<<endl;
    cout<<mapping["aa"]<<endl;
    cout<<"Size of map is "<<mapping.size()<<endl;


    //searching

    cout<<mapping.count("love")<<endl; //1 means entry exist
    cout<<mapping.count("lover")<<endl; //0 means no entry found for the given key

    //better way to search using find() return iterator
    //if not found ,it will reach till end() of map
    if(mapping.find("tar1un")!=mapping.end()){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }

    return 0;
}