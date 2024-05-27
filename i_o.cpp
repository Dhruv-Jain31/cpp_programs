#include <iostream>
using namespace std;

int main() {
// in sync between C and C++ operations every C++ I/O operation is synchronized with the corresponding C I/O operation 
//like printf and cout can be used interchangeably without causing inconsistencies in the output.

    ios_base::sync_with_stdio(false);// disables sync between C and C++ streams. allowing C++ I/O operations to be faster. 
    //However, this also means you should avoid mixing C and C++ I/O operations, as it can lead to unpredictable results.


    // in default behaviour cout is flushed before cin.
    cin.tie(NULL);
    cout.tie(NULL); // Untie cout from cin. since these two streams are tied together.


    cout << "Enter your name: "; // This may not be flushed immediately
    string name;
    cin >> name; // cout is not automatically flushed before this line
    cout << "Hello, " << name << "!\n";
    return 0;
}
