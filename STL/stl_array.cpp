#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

// IMP => all stl containers are passed by value.
// IN ORDER TO PASS STL CONTAINER AS REFERENCE WE NEED TO CREATE A REFERENCE VARIABLE USING &
 
 // update an array
 void updateArray(array<int,6> &xarr,int i , int val){
    xarr[i] = val; // xarr points to the base address of arr and it can easily be updated
 }

 // print
 void printArray(const array<int,6> &xarr){
    int n = xarr.size();
    // const makes sure that array is not updated

    for(int i =0; i<n; i++){
        cout << xarr[i] <<",";
    }
    cout << endl;
 }

int main(){

    array<int,6> arr = {1,2,3,16,70,8}; // this is a object of array class
    arr[0] = 10;

    updateArray(arr,0,100);

    //sort
    sort(arr.begin(), arr.end());

    //fill

    array<int,6> arr1;
    arr1.fill(5); // filles all elements of arr1 with 5

    printArray(arr);
    printArray(arr1);

    // for each loop
    for (int x: arr1){
        cout << x << ",";
    }
    cout<< endl;

    return 0;

}