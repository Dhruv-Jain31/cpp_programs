#include <vector>
#include <iostream>
using namespace std;

//Expected Complexity O(N)
vector<int> productArray(vector<int> arr) {
    int n = arr.size();
    if(n==1){
        return {0};
    }
    vector<int> output(n, 1);

    // Calculate prefix products from left to right
    int prefix = 1;
    for (int i = 0; i < n; i++) {
        output[i] = prefix;
        prefix *= arr[i];
    }

    // Calculate suffix products from right to left
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        output[i] *= suffix;
        suffix *= arr[i];
    }

    for (auto p: output){
        cout << p << ",";
    }

    return output;
}

int main(){
    vector<int> arr1 = {1,2,3,4,5};
    productArray(arr1);
}