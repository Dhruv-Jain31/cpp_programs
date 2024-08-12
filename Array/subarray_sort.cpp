/*Given an array of size at least two, fond the smallest sub-array that needs to be sorted in place
so that entire input array becomes sorted.
If the input array is already sorted, the function should return [-1,-1],otherwise return the
start and end index of smallest sub-array*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> subarray_sort(vector<int> a){
    // brute force O(NlogN) + O(N)
    vector<int> b(a);
    sort(a.begin(),a.end());

    // comparing between sorted and unsorted array
    int i = 0;
    int n = a.size();
    while (i<n && a[i] == b[i]){
        i++; //  starting index of subarray
    }

    int j = a.size() - 1 ;
    while (j>=0 && a[j] == b[j]){
        j--;  // ending index of subarray
    }

    // if it is already sorted
    if(i==a.size()){
        return {-1,-1};
    }

    cout<< "subarray needed to be sorted is: ";

    for(i; i<=j; i++){
        cout<< b[i] << ",";
    }

    cout << endl;

    return {i,j}; // returning only indices of sub array
}

int main(){
    vector<int> arr = {1,2,3,4,5,8,7,6,10,9,11};
    vector<int> result =  subarray_sort(arr);

    for (auto p : result){
        cout << p << ",";
    }
}