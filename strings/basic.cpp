#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    // char s[1000] = {'1','a','b','c','d'};

    string s = "hello world"; //dynamic array
    cout << s << endl;

    string d;
    getline(cin,d,'.'); // user gives the input which is terminated by (.)
    cout << d << endl;

    // array of string
    int n = 5;
    vector<string> sarr;
    string temp;

    while(n--){
        getline(cin,temp);   // by default string terminates with a new line
        sarr.push_back(temp);
    }

    for (string x : sarr){
        cout << x <<"," << endl;
    }

    return 0;
}