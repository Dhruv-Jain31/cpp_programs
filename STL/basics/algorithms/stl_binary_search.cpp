#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int arr[] = {20, 30, 40, 40, 50, 100, 1100, 1100, 1100, 1100}; // binary search takes a sorted array
    int n = sizeof(arr) / sizeof(int);
    //Search in a sorted array
    int key;
    cout << "Enter element whose freq. to be found: ";
    cin>> key;

    bool present = binary_search(arr, arr+n, key); // logN
    if (present) {
        cout << "Element is Present";
    }
    else {
        cout << "Element is absent !" ;
    }

    // for frequency of element:
    // get the index of element
    // lower bound(s,e,key) and upper bound(s,e,key) of the element
    // Lower Bound: returns address of value that is just less than or equal to the key
    //Upper Bound: returns address of value that is just greater than the key

    auto lb = lower_bound(arr, arr+n, key);
    cout << endl << "Lower bound of key is: " << (lb - arr) << endl;  // lb - arr gives the index

    auto ub = upper_bound(arr, arr+n, key);
    cout<< endl << "Upper bound of key is: " << (ub - arr) << endl;

    cout << "Frequency of key is " << (ub - lb) << endl;

    return 0;

// for unsorted array we can use:
// 1. Sort + Binary Search (NlogN)
//2. Map (but insertion takes NlogN time)
//3. Unordered map (O(N)), this is used for unsorted array
}