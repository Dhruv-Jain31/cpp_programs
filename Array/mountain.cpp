/*Write a function that takes input an array of distinct integers, and returns the highest mountain.
A mountain is defined as adjacent integers that are strictly increasing until they reach a peak, and
then get strictly decreasing. Atleast 3 numbers are required to form a mountain.
eg: 5,10,8. They form a mountain.
We need to find the width of the mountain i.e no. of elements from where mountain starts increasing
and then decreasing.*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int highest_mountain(vector<int> arr) {
    int n = arr.size();

    if (n < 3) {
        // There should be at least 3 elements to form a mountain
        return 0;
    }

    int largest_width = 0;

    for (int i = 1; i <= n - 2; i++) { // n-2 because n-1 cannot be a peak

        // Check if arr[i] is a peak or not
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            // Initialize the count and back iteration variable
            int cnt = 1;
            int j = i;

            // Count backwards
            while (j >= 1 && arr[j] > arr[j - 1]) {
                j--;
                cnt++;
            }

            // Count forward
            while (i <= n - 2 && arr[i] > arr[i + 1]) { // i<=n-2 since last element cannot be a peak
                i++;
                cnt++;
            }

            largest_width = max(largest_width, cnt);
        }
    }

    return largest_width;
}

int main() {
    vector<int> arr{5, 6, 1, 2, 3, 5, 4, 3, 2, 0, 1, 2, 3, -2, 4};

    cout << highest_mountain(arr) << endl;

    return 0;
}

