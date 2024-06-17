# include <iostream>
#include <queue>

using namespace std;

class Compare{
public:
     bool operator()(int a, int b){
        return a*2 > b*3;
     }
};

int main(){
    int arr[] = {10,15,16,17,8,31};
    int n = sizeof(arr)/sizeof(int);

    priority_queue<int, vector<int>, Compare> heap3;  //  made custom comparator using the compare class

    for (int x: arr){
        heap3.push(x);
    }

    cout <<"elements of heap3 are: ";

    while(!heap3.empty()){
        cout << heap3.top() << ",";
        heap3.pop();
    }
    cout << endl;


    return 0;
}
