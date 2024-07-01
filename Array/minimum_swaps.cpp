/*Given an array of size N, find the minimum number of swaps needed to make array sorted

sample Input
a1 = [5,4,3,2,1]

sample output = 2

sample Input
a2 = [10,11,5,4,3,2,1]

sample Output = 4 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int min_swaps(vector<int> arr){

    int n = arr.size();
    int answer = 0;
    // knowing actual positions of element(sorting) and storing there current indices
    vector<pair<int,int>> ap(n);
    for (int i = 0; i<n; i++){
        ap[i].first = arr[i];
        ap[i].second = i;
    }

    //sorting
    sort(ap.begin(), ap.end()); // it is done based upon the values

    // main logic
    vector<bool> visited_index(n,false);

    for(int i = 0; i<n; i++){

        // if index is visited, we will simply continue or element is at correct position
        int old_position = ap[i].second;
        if(visited_index[i] == true || old_position == i){
            continue;
        }

        //visiting the element (index) for the first time
        int index = i;
        int cycle = 0;

        while(visited_index[index] == false){
            visited_index[index] == true;
            int next_index = ap[index].second;
            index = next_index;
            cycle +=1;
        }

        answer += (cycle - 1);
    }

    return answer;

}



int main(){
    vector<int> arr{5,4,3,2,1};
    cout << min_swaps(arr) << endl;

    return 0;
}