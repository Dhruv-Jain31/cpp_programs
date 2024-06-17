#include <iostream>
#include <queue>

using namespace std;

int main(){

    int arr[] = {10,15,16,17,8,31};
    int n = sizeof(arr)/sizeof(int);

    priority_queue<int> heap;  // by default max heap is created.

    for (int x: arr){
        heap.push(x); // all the elements will be added in the heap
    }

    cout <<"elements of heap are: ";

    while(!heap.empty()){
        cout<< heap.top() << ",";
        heap.pop();
    }

    cout << endl;

    priority_queue<int, vector<int>, greater<int>> heap2;  // to make min heap

    for (int x: arr){
        heap2.push(x);
    }

    cout <<"elements of heap2 are: ";

    while(!heap2.empty()){
        cout << heap2.top() << ",";
        heap2.pop();
    }
    cout << endl;


    return 0;
}
