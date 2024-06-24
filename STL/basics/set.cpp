#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
    set<string> fruits = {"apple","mango","guava","banana"};

    int n = 5;
    while(n--){
        string fruit;
        cin >> fruit;
        fruits.insert(fruit);
    }

    if(fruits.find("papaya") != fruits.end()){
        fruits.erase("papaya");
    }

    for(set<string>::iterator it = fruits.begin(); it !=fruits.end(); it++){
        cout << *it <<endl;
    }

    return 0;
}
