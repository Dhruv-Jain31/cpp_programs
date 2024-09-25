/*
Sample Input
------------
3
92 022
82 12
77 13
2 false numeric

Sample Output
-------------
82 12
77 13
92 022

explanation: key used for ordering = 2, reversal = false, ordering = numeric

*/

#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    cin.get(); //to consume the extra \n there in input just after no. of inputs

    string temp;
    vector<string> v;
    for(int i = 0; i<n; i++){
        getline(cin,temp); //includes white spaces i.e 82 12 will be stored as a single string
        v.push_back(temp);
    }

    int key;
    bool reversal;
    string ordering;
    cin >> key >> reversal >> ordering; // it doesn't include white spaces i.e 82 12 will be stored as separate strings
}

//1. TO extract keys for comparison and store them


