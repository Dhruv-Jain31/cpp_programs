#include <iostream>
#include <algorithm>

using namespace std;

// function with variable number of arguments are variadic functions.

int sum(){
    return 0;
}

template<typename... T>
int sum(int a, T... args){
    return a + sum(args...); // it will take variable no. of arguments
}

int main() {

    cout << sum(1,2,3,3,4,5,6,10) << endl;
    cout << sum(1,2) << endl;

    return 0;
}