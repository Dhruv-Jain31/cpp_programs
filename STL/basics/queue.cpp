#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(){

    queue<int> q;

    q.push(1);
    q.push(2);

    q.push(31);
    q.push(17);
    q.push(30);

    while(!q.empty()){
        cout<< q.front() <<" ";
        q.pop();
    }
    return 0;
}