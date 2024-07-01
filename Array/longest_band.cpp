/*Given an array containing N integers, find length of longest band.
A band is a subsequence which can be reordered in such a manner that all elements appear
consecutive (i.e with absolute difference of 1 neighbouring elements.)
Longest band is the band (subsequence) which contains maximum integers*/

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int longest_band(vector<int>arr){
    int n = arr.size();
    unordered_set<int> s;
    vector<int> longest_band;
    int largest_len = 0;

    // data inside set
    for(int x: arr){
        s.insert(x);
    }

    //iterate over vector

    for(auto element : s){
        int parent = element - 1;

        if(s.find(parent) != s.end()){
            // we start the chain from that band
            int next_no = element;
            int cnt = 1;
            vector<int> current_band;
            current_band.push_back(parent);

            while(s.find(next_no) != s.end()){
                current_band.push_back(next_no);
                next_no++;
                cnt++;
            }

            if (cnt > largest_len){
                largest_len = cnt;
            }

            if(current_band.size() > longest_band.size()){
                longest_band = current_band;
            }
        }
    }

    for(int num : longest_band){
            cout << num << ",";
        }

        cout << endl;

    return largest_len;

}



int main(){

    vector<int> arr{1, 9, 3, 0, 18, 5, 2, 4, 10, 7, 12, 6};
    cout << longest_band(arr);

    return 0;
}