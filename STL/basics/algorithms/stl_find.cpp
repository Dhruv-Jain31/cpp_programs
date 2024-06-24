// this algorithm class includes:
//1. Search (linear search)
//2. Binary search
//3. Upper and lower bound
//4. Next permutation
//5. Pair Class
//6. String Class

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int arr[] = {1,10,11,9,100};
    int n = sizeof(arr) / sizeof(int);
    //Search --> find

    int key;
    cout<< "Enter element to find: ";
    cin>> key;
    auto it = find(arr, arr+n, key);
    int index = it - arr; // find returns the address of element to be found and subtracting it from base
    // address gives us the index

    if(index == n){
        cout << key << "not present";
    }
    else{
        cout<< "Present at index " << index;
    }

    return 0;
}
