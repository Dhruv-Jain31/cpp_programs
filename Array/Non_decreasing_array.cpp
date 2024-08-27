//You have been given an integer array/list 'ARR' of size 'N'.
//Write a solution to check if it could become non-decreasing by modifying at most 1 element.
//We define an array as non-decreasing, if ARR[i] <= ARR[i + 1] holds for every i (0-based) 
//such that (0 <= i <= N - 2).

#include <iostream>
#include <vector>
using namespace std;

bool isPossible(int *arr, int n) {
    int numToRemove = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            numToRemove++;
            if (numToRemove > 1) {
                return false;
            }

            if (i==1 || arr[i] >= arr[i-2]){
            arr[i-1] = arr[i];
            } else {
            arr[i] = arr[i - 1];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }
    cout << endl;
    return true;
}

int main(){
    int arr[] = {-94,-89,-28,-15,438,69,70,75,83,87};
    int n= sizeof(arr)/sizeof(arr[0]);
    bool result = isPossible(arr,n);
}