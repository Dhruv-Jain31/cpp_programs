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
    p3.first = "Dhruv";
    p3.second.first = 21;
    p3.second.second = 77;

    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;
    cout << p3.first <<" " << p3.second.first <<" "<< p3.second.second << endl;
}