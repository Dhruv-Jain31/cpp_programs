#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    // set is just a collection of unique keys

    unordered_set<int> s{1,2,3,8,11,15,0};

    int key;
    cin>>key;

// search in key O(1)
    if(s.find(key) != s.end()){ // s.end denotes the address just after ending of set
        cout<< key << " is present" << endl;
    }
    else{
        cout<<"Not found" << endl;
    }

    // erase and insert O(1)
    s.erase(11);
    s.insert(111);

    // print all the elements

    for(auto x : s){
        cout << x << ",";
    }

    return 0;
}