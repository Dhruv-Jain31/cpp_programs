// print pairs whose sum is equal to k in an array
//approaches:
// 1. Brute force : have 2 nested loops = O(n^2)
// 2. sorting + 2 pointer = O(nlogn)
// 3. sorting + binary_search = O(nlogn)
// 4.Hashing = O(n)

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void pairSum(vector<int> arr, int Sum){
    unordered_set<int> s;

    for(int i=0; i<arr.size(); i++){
        int x = Sum - arr[i];
        if(s.find(x) != s.end()){  // we only look for elements that we have encountered earlier
            cout<<x <<"," <<arr[i] <<endl;
        }
        //insert the current no inside set
        s.insert(arr[i]);
    }
}

int main(){

    vector<int> arr{10, 5, 2, 3, -6, 9, 11, 2};
    int S = 5;

    pairSum(arr,S);

    return 0;
}

