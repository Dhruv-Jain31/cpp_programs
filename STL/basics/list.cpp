#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;
    l.push_back(20);
    l.emplace_back(4);
    l.push_front(15);
    l.emplace_front(1);
    //rest functions same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap

    cout<< l.front() << " " << l.back() << endl;
    cout << l.size() << endl;
    return 0;
}