/* double—ended queue sequence containers with dynamic size:
that can be expanded or contracted on both ends (front or
back)
deques are not guaranteed to store all its elements in
contiguous storage locations: accessing elements in a deque
by offsetting a pointer to another element causes undefined
behavior •*/

#include <iostream>
#include <deque>

using namespace std;

int main(){
    // create a deck
deque<int> first;                                        //empty deque of ints
deque<int> second (4,100);                               // four ints with value 100
deque<int> third (second.begin(), second.end());         // iterating through second
deque<int> fourth (third); 

// using arrays
int myints[] = {16,2,77,29};
int n = sizeof(myints)/sizeof(int);

deque<int> fifth (myints, myints + n);   

for (int x : fifth){
    cout << x << ",";
}
cout << endl;

//push back
fifth.push_back(30);

for (int x : fifth){
    cout<< x << ",";
}
cout << endl;

// pop back
fifth.pop_back();

// push front
fifth.push_front(17);

for (int x : fifth){
    cout << x << ",";
}
cout << endl;

cout << fifth.front() << endl;
cout << fifth.back() << endl;

cout<< "size of deque is: "<< fifth.size() << endl; // it does not have the capacity function

return 0;

}