#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
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

    cout<<std::endl;

    for(int x: arr){  // for each loop. every value of arr comes into x.
        cout<<x<<" ";

    }


    cout <<std::endl;

    cout<<arr.at(0) <<endl; // similar to arr[0]. but it does some bound checking i.e 
    // there is error message if things go above the range as well.

    cout<<"Front is: " <<arr.front()<<endl; //for accessing the front element
    cout<<"Back is :"  <<arr.back()<<endl;  // for accessing the back element

    return 0;


}