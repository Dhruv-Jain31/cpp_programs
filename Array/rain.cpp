#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int longest_band(vector<int> arr) {
    int n = arr.size();
    unordered_set<int> s(arr.begin(), arr.end());
    vector<int> longest_band;
    int largest_len = 0;

    for (int element : arr) {
        // Check if the current element is the start of a new band
        if (s.find(element - 1) == s.end()) {
            int current = element;
            vector<int> current_band;

            // Collect all elements of the current band
            while (s.find(current) != s.end()) {
                current_band.push_back(current);
                current++;
            }

            // Update the longest band if the current one is longer
            if (current_band.size() > longest_band.size()) {
                longest_band = current_band;
            }

            // Update the largest length
            largest_len = max(largest_len, static_cast<int>(current_band.size()));
        }
    }

    // Print the longest band
    for (int num : longest_band) {
        cout << num << " ";
    }
    cout << endl;

    return largest_len;
}

int main() {
    vector<int> arr{1, 9, 3, 0, 18, 5, 2, 4, 10, 7, 12, 6, 8};
    cout << "Longest Band Length: " << longest_band(arr) << endl;

    return 0;
}
