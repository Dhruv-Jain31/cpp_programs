#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> arr = {1,2,3,4,5}; // in brackets there is data type of vector.

    //fill constructor
    vector<int> student_marks(10,0); //vector student marks is created with 10 elements each has value = 0.

    //size of vector
    cout<<"size of arr is: "<< arr.size() <<endl;

    // capacity of vector i.e how much elements it can hold
    cout<<"capacity of vector is: "<< arr.capacity() <<endl;

    arr.push_back(10); // to push elements in vector
    arr.push_back(20);
    arr.push_back(30);

    for(int x: arr){  // for each loop. every value of arr comes into x.
        cout<<x<<" ";

    }

    cout<<std::endl;

    cout<<"size of arr is after inserting new elements is: "<< arr.size() <<endl;

    // to insert new elements a new copy of original vector is formed with double size.
    cout<<"capacity of vector after inserting new elemets is: "<< arr.capacity() <<endl;

    arr.pop_back(); // removes the last element of vector

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