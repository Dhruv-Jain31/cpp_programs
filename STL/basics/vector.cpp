#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // empty container constructor
    vector<int> first;

    // fill constructor (4 integers with value 20)
    vector<int> second(4, 20);

    // Range constructor: vector from array
    int numbers[] = {10, 20, 30, 40};
    vector<int> third(numbers+ 0, numbers + 4);

    // copy constructor = creates a copy of one vector inside another
    vector<int> fourth(third);

    // initializer list
    vector<int> fifth = {1, 2, 3, 4, 10};

    // getting the current size of vector
    cout << "Size of fifth: " << fifth.size() << endl;

    // getting the underlying capacity
    cout << "Capacity of fifth: " << fifth.capacity() << endl;

    // to get the max size
    cout << "max size of fifth: " << fifth.max_size() << endl;

    // push back method O(1), linear if re-allocation happens
    fifth.push_back(20); // similary there is pop back
    fifth.emplace_back(20); //similar to push_back but has faster speed

    cout << "Size of fifth after push back: " << fifth.size() << endl;
    cout << "Capacity of fifth after push back: " << fifth.capacity() << endl;

    // clear all the elements in the current vector, reduces size to 0
    // capacity of vector will not change
    // fifth.clear();

    //sort
    sort(fifth.begin(),fifth.end());

    // erase the 4th element
    fifth.erase(fifth.begin() + 3);

    for (int x : fifth){
        cout << x << ",";
    }
    cout << endl;

    // erase the range - first 3 elements
    fifth.erase(fifth.begin(), fifth.begin() + 3);

    for (int x : fifth){
        cout << x << ",";
    }
    cout << endl;

    vector<pair<int,int>>sixth;
    sixth.push_back({1,2});
    sixth.emplace_back(3,4); // pushes 3 and 4 as pairs no need to pass them in {}

    vector<pair<int,int>>::iterator it = sixth.begin();
    // another way of printing the pair by deferencing
    cout << (*it).first << " " << (*it).second << endl;
    it++;
    cout << it->first << " " << it->second << endl;

    vector<int>seventh(2,100); //{100,100}
    seventh.insert(seventh.begin(),300); //{300,100,100}
    seventh.insert(seventh.begin() + 1, 2, 10); //{300,10,10,100,100}

    return 0;

}
