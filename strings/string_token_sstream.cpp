// tokenizing a string is splitting a string with respect to some delimiter(s)

// using stringstream class
#include <iostream>
#include <sstream>
#include <vector>
#include <cstring>
using namespace std;

int main(){

    string input;
    getline(cin,input);

    //creating a string stream object
    stringstream ss(input);

    string token;
    vector<string> tokens;
    while(getline(ss,token,' ')){  // based on the space it creates small strings which is stored in
    // string token and then it is pushed to vector tokens
        tokens.push_back(token);
    }

    for(auto token : tokens){
        cout << token << ",";
    }

}