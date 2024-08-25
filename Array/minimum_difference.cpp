//Implement a function that takes in two non-empty arrays of integers,
//finds the pair of numbers (one from each array) who absolute difference is closest to zero,
//and returns a pair containing these two numbers, with the first number from array1 and second from array2.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

pair<int, int> minDifference(vector<int> a, vector<int> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0, num1 = 0, num2 = 0;
    int difference  = INT_MAX;
    int m = a.size();
    int n = b.size();

    while(i<n && j<m){
        int d = abs(a[i] - b[j]); // abs() in C++ returns the absolute value of an integer number. If the number is negative, it will return the positive value (with the same magnitude)
        if (d < difference){
            difference = d;
            num1 = a[i];
            num2 = b[j];
        }

        if(a[i] < b[j]){
            i++;
        }
        else{
            j++;
        }
    }

    cout << "min. difference is: " << difference << endl;
    cout << "pairs are: " << num1 << "," << num2;
    return make_pair(num1,num2);
}

int main(){
    vector <int> array1 = {23, 5, 10, 17, 30};
    vector <int> array2 = {26, 134, 135, 14, 19, 6};

    minDifference(array1, array2);
}