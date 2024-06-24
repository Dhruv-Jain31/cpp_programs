/*Given an array of N integers, and an integer K, the task is to find the number of distinct pairs of integers in the array 
whose sum is equal to K.*/

#include <iostream>
#include <vector>
#include <unordered_set>
#include <set>

using namespace std;

vector<pair<int,int>> pairSum(vector<int> arr,int target_sum){ // return type is a vector int
    // logic
    unordered_set<int> s;
    //vector<pair<int,int>> result;

    set<pair<int,int>> result_set;

    for(int i=0; i<arr.size(); i++){

        int x = target_sum - arr[i];
        if(s.find(x) != s.end()){ // element is found in set
        /*if only one distinct element to be found
            result.push_back(x);
            result.push_back(arr[i]);
            return result;*/

            // to get all distinct pairs
            result_set.insert({x,arr[i]});
        }

        // inserting the current number inside set.
        // imp. to be defined after the if condition to avoid duplicacy even if it is not in the array.
        s.insert(arr[i]);
    }

    //return {}; // we return empty vector if nothing is present in case of only one distinct element

     //converting set to vector
    vector<pair<int, int>> result(result_set.begin(), result_set.end());
    return result;


}

int main(){

    vector<int> arr{10, 5, 2, 3, -6, 9, 11, 4, 0};
    cout<< "Enter target Sum: ";
    int sum;
    cin >> sum;
    cout << endl;

    auto pairs = pairSum(arr,sum);
    if(pairs.size() == 0){
        cout << "No such pair" << endl;
    }
    else{
        cout << "pair is: "<< endl;
        for(auto p: pairs){
            cout << p.first << "," << p.second << endl;
        }
    }

    return 0;
}