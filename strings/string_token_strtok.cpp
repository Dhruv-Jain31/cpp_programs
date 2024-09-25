// splitting the string using strtok function

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main(){

    char input [1000];
    cin.getline(input,1000);

    //strtok = it starts at the starting of input and gives one word at a time
    char *token = strtok(input,","); // input is first character of the string and , is the delimiter
//strtok internally apna state ya position yaad rakhta hai ki string me kaunse point tak process ho chuka hai.

    while (token != NULL){
        cout << token << endl;
        token = strtok(NULL," "); // internally maintains the state of the string we passed in last fn call
        // by making a static variable and through it tracks uptill where string was splitted
    }
}

//passing NULL means that strtok should process that string only, which was passed earlier.