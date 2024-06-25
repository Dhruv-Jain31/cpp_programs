/*Given an array containing N integers, and an number S denoting the target sum.
Find all distinct integers that can add up to form target sum. The numbers in each triplet
should be ordered in ascending order, and triplet should be ordered too.
Return empty array if no such triplet*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> triplets(vector<int> arr,int target_sum){
    // logic
    int n = arr.size();
    vector<vector<int>> result;
    sort(arr.begin(),arr.end());

    //pick every a[i], solving pair sum for remaining part using two pointer
    for(int i=0; i<=n-3; i++){ // we take n-3 because we have to find triplet

        int j = i+1;
        int k = n-1;

        //two pointer approach => triplet = arr[j] + arr[k] = target_sum - arr[i]
        while(j < k){
            int current_sum = arr[i];
            current_sum +=arr[j];
            current_sum +=arr[k];

            if(current_sum == target_sum){
                result.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;
            }
            else if(current_sum > target_sum){
                k--;
            }
            else{
                j++;
            }
        }
    }
    return result;

}


int main(){

    vector<int> arr{2,1,3,5,4,6,7,9,8,15};
    cout << "enter target sum: ";
    int sum;
    cin >> sum;

     auto triplet = triplets(arr,sum);
    if(triplet.size() == 0){
        cout << "No such triplet" << endl;
    }
    else{
        cout << "triplet are: "<< endl;
        for(auto p: triplet){
            /*for(auto no : p){
                cout << no << ", ";
            }
            cout << endl; */

            // When we have a vector of vectors, you access each element of the inner vectors using indices
            cout << p[0] << ", " << p[1] << ", " << p[2] << endl;
        }
    }

    return 0;
}