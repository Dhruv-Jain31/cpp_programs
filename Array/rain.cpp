/*Given n non-negative integers representing an elevation map where the width of each bar is 1,
compute how much water it can trap after raining.

Example 1:

see rainwatertrap.png for clarity

Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1].
In this case, 6 units of rain water (blue section) are being trapped..*/

#include <iostream>
#include <vector>

using namespace std;

int trapped_water(vector<int> height){

    // if there are two bars, then no water can be trapped
    int n = height.size();
    if(n <= 2){
        return 0;
    }

    // Left MAX, Right MAX
    vector<int> left(n,0) , right(n,0);
    left[0] = height[0];
    right[n-1] = height[n-1];

    for(int i = 1; i<n; i++){
        left[i] = max(left[i-1],height[i]); // iterating from left to right and storing the max element
    }

    for(int i = n-2; i>0; i--){
        right[i] = max(height[i],right[i+1]); // iterating from right to left and storing the max
    }

    //water level
    int water = 0;
    for(int i = 0; i<n; i++){
        water += min(left[i],right[i]) - height[i];
    }

    return water;
}


int main(){
    vector<int> water = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << trapped_water(water) << endl;
}


