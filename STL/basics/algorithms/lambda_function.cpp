#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
/* lambda function is a convenient way to create small, unnamed functions on the fly. 
These functions can be defined right at the place where they are needed.
 syntax:
[capture](parameters) -> return_type {
     function body
};
 it can capture variables from surroundings */

int main() {

    auto cmp = [](auto a, auto b) -> bool{  // auto means a can be int or a string
        return a > b;
    };

    auto fruit_len_Compare = [](string f1, string f2) -> bool{
        return f1.length() < f2.length();
    };

    vector<int> v = {100,2,3,10,12,13,15};
    vector<string> fruit = {"kiwi", "appleeeee", "mango", "ban"};

    sort(v.begin(), v.end(), cmp); //here lambda function is passed as an argument. whenever sort is
    // called it internally calls lambda function and does the computation. here this lambda
    // function acts as a custom comparator. this makes sort in descending order

    sort(fruit.begin(), fruit.end(), fruit_len_Compare);

    //iteration
    for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
        cout << *it << " "; // it captures the address of element * is used to dereference it
    }
    cout<< endl;

    for(auto ele : fruit){
        cout << ele << endl;
    }

    return 0;
}
