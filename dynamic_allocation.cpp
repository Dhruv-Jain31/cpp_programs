#include<bits/stdc++.h>

using namespace as std;

// dynamic allocation of arrays can be done through pointers.
int main(){

    int *arr; // pointer pointing to base address of array
    int n;
    cin>>n;
    arr = new int[n];

// Now we can do normal array operations

    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    return 0;

}

/*
arr[i].
Internally it translates into this:
arr[i] = *(arr + i)
by pointer arithmetic:
arr[i] = *(arr + i * sizeof(int))
*/
