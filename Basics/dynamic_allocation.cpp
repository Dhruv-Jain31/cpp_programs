#include <bits/stdc++.h>

using namespace std;

// dynamic allocation of arrays can be done through pointers.
int main(){

    int *arr; // pointer pointing to base address of array
    int n;
    cout<<"Enter number of elements in array: \n";
    cin>>n;
    arr = new int[n];
/*
arr[i].
Internally it translates into this:
arr[i] = *(arr + i)
by pointer arithmetic:
arr[i] = *(arr + i * sizeof(int))
*/
};
