/*Given an array of N integers, and an integer K, the task is to find the number of distinct pairs of integers in the array 
whose sum is equal to K.*/

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> pairSum(vector<int> arr,int target_sum){ // return type is a vector int
    // logic
    unordered_set<int> s;
    vector<int> result;

    for(int i=0; i<arr.size(); i++){

        int x = target_sum - arr[i];
        if(s.find(x) != s.end()){ // element is found in set
            result.push_back(x);
            result.push_back(arr[i]);
            return result;
        }

        // inserting the current number inside set. 
        // imp. to be defined after the if condition to avoid duplicacy even if it is not in the array.
        s.insert(arr[i]);
    }
    return {}; // we return empty vector if nothing is present

}

int main(){

    vector<int> arr{10, 5, 2, 3, -6, 9, 11, 4, 2, 0};
    cout<< "Enter target Sum: ";
    int sum;
    cin >> sum;
    cout << endl;

    auto p = pairSum(arr,sum);
    if(p.size() == 0){
        cout << "No such pair" << endl;
    }
    else{
        cout << "pair is: " << p[0] << "," << p[1] << endl;
    }

    return 0;
}