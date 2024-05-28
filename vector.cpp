#include <bits/stdc++.h>

using namespace as std;

int main(){

    ios_base::sync_with_studio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> arr; // in brackets there is data type of vector.

    arr.push_back(10); // to push elements in vector
    arr.push_back(20);
    arr.push_back(30);

    for(int x: arr){  // for each loop. every value of arr comes into x.
        cout<<x<<" ";

    }

    arr.pop_back(); // removes the last element of vector

    for(int x: arr){  // for each loop. every value of arr comes into x.
        cout<<x<<" ";

    }


    cout <<std::endl;

    cout<<"arr.at(0)"; // similar to arr[0]. but it does some bound checking as well.


}