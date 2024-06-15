#include <iostream>

using namespace std;

//array to functions
//array is passed by reference
void updateArray(int *arr,int i, int val){
    // arr[i] = *(arr + i) = *(arr + i*size of (type))
    // int *arr = int arr[] = it stores the base address of array
    arr[i] = val;
}

void printArray(int *arr , int n){
    // cannot generate value of n here because
    // here size of arr is size of int not the actual size
    for (int i =0; i<n; i++){
        cout << arr[i] << ",";
    }
}

void arraySize(int *arr){
    // here pointer to base address of array is passed
    // so size will be 4 bits.
    cout<< "Array Size in function" << sizeof(arr);
    cout<< endl;
}


int main(){

    int arr [] = {1,2,3,4,5}; // initialization list
    int n = sizeof(arr)/sizeof(int);

    updateArray(arr,1,13); // actual array is updated

    printArray(arr,n);

    arraySize(arr);

    cout<< "Array size in Main" << sizeof(arr) <<endl;
    // in this actual array is passed and it's size is generated.
    cout <<endl;


};
