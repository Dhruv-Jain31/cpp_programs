#include <iostream>

using namespace std;

// Templates : they are used to write generic functions. i.e functions
// can work with any data type whether it is int,float,char etc

template<typename T>
int search(T arr[], int n, T x){

    for(int i = 0; i<n; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main(){

    // int arr[] = {1,2,3,10,0,9};
    float arr[] = {1.1, 2.2, 3.3, 4.6, 5.2};
    int n = sizeof(arr)/sizeof(float);

    float key;
    cout<<"Enter the key to search: ";
    cin>> key;

    cout << search(arr,n,key);  // this function works with any type of array because of template
    return 0;
}
