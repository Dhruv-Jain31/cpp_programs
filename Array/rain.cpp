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

int trapped_water(vector<int> heights){

    // if there are two bars, then no water can be trapped
    int n = height.size();
    if(n <= 2){
        return 0;
    }

    // Left MAX, Right MAX
}



  

int main(){
    vector<int> water = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << trapped_water(water) << endl;
}


