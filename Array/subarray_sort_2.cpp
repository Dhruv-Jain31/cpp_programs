// this is a better approach with O(N) t.c

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// helper function for checking which elements are out of order
bool out_of_order(vector<int> arr, int i){
    int x = arr[i];
    if(i == 0){
        return x > arr[1];
    }
    if(i == arr.size() - 1){
        return x < arr[i-1];
    }
    return x > arr[i] || x < arr[i];
}


pair<int,int> subarray_sort_2(vector<int> arr) {

    int smallest = INT_MAX;  //represents the maximum value that can be stored in an int data type.
    int largest = INT_MIN;   //represents the minimum value that can be stored in an int data type.

    for (int i=0; i<arr.size(); i++ ){
        int x = arr[i];

        if(out_of_order(arr,i)){
            smallest = min(smallest,x);
            largest = max(largest,x);
        }
    }

    // next step is to find the right index where smallest and largest lie(sub_array)
    if(smallest == INT_MAX){  // means array is already sorted
        return {-1,-1};
    }

    // if we have atleast one element out of order it means that there are two elements out of order

    // finding the extremes of unsorted sub_array
    int left = 0;
    while (smallest >= arr[left]){
        left++;
    }

    int right = arr.size() - 1;
    while (largest <= arr[right]){
        right--;
    }

    return {left,right};
}


int main(){
    vector <int> arr = {1,2,3,4,5,8,6,7,9,10,11};
    auto p = subarray_sort_2(arr);
    cout << p.first << " and " << p.second << endl;

    return 0;
}