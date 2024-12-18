#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<string,int> p1;
    pair<string,int> p2;
    p1 = make_pair("Dhruv",31);
    //or
    p2.first = "Dhruv";
    p2.second = 30;

    pair<string,pair<int,int>>p3;
    pair<pair<string,int>,int>p4;
    pair<int,int> arr[] = {{1,2},{2,5},{5,1}}; //array of pairs

    p3.first = "Dhruv";
    p3.second.first = 21;
    p3.second.second = 77;

    p4 = make_pair(make_pair("Dhruv",31),31);

    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;
    cout << p3.first <<" " << p3.second.first <<" "<< p3.second.second << endl;
    cout << p4.first.first << " " << p4.first.second <<" "<< p4.second << endl;
    cout << arr[1].second;
}