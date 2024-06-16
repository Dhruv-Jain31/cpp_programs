#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main(){

    unordered_map<string,int> menu;  // key is of type string and value is of type int

    // insertion in hashtable is O(1) operation
    menu["maggi"] = 15;
    menu["colddrink"] = 20;
    menu["dosa"] = 99;
    menu["pizza"] = 499;
    menu["indianplatter"] = 399;

    // update query O(1)
    menu["dosa"] = (1 + 0.1)*menu["dosa"];

    //erase O(1)
    // menu.erase("dosa")


    //searching in hashtable. it is again a O(1)
    string item;
    cin >> item;

    if (menu.count(item)==0){
        cout<<item<<" is not available " << endl;
    }
    else{
        cout<<item<<" is available, and its cost is " << menu[item] <<endl;
    }

    // we can iterate over all the key-value pair that are present O(n)
    for(pair<string,int> item: menu){
          // when we iterate hashtable we get a pair of string, int type
          cout<<item.first <<" - " << item.second <<endl; // first represents key and second₫ repre. pair
    }
    cout<<endl;

    return 0;

    // if we use map instead of unordered map all O(N) operation
    // will become O(logn) operation. since map use bst internally.
    //map will give a sorted order in which things are sorted
    // lexicographically
}