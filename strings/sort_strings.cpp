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

string extract_Key(string str, int key){
    char *s = strtok( (char *)str.c_str()," "); //str.c_str() function that converts string to c-style string
    //char * type-cast. it converts str.c_str() to explicitly char* type.
    while(key>1){
        s = strtok(NULL," ");
        key--;
    }
    return (string)s;
}

int convert_to_int(string s){
    int ans = 0;
    int p = 1;

    for(int i = s.length() - 1; i>=0; i--){
        ans += ((s[i]-'0')*p);  //If s[i] = '5', its ASCII value is 53.
        //When you do '5' - '0', you are actually doing 53 - 48, which gives you 5, the integer value of '5'.
        p = p*10;
    }
    return ans;
}

bool numericCompare(pair<string,string> s1, pair<string,string> s2){
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;

    return convert_to_int(key1) < convert_to_int(key2);
}


bool lexicoCompare(pair<string,string> s1, pair<string,string> s2){
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;

    return key1 < key2;
}

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
    string reversal;
    string ordering;
    cin >> key >> reversal >> ordering; // it doesn't include white spaces i.e 82 12 will be stored as separate strings
    //cin >> bool doesn't handle strings like "true" or "false" well. It only interprets numeric values (0 as false and anything else as true).

    //1. TO extract keys for comparison and store them
    vector<pair<string,string>> vp;

    for(int i = 0; i<n; i++){
       vp.push_back({v[i],extract_Key(v[i],key)});
    }

    //2. Sorting
    if(ordering == "numeric"){
        sort(vp.begin(),vp.end(),numericCompare);
    }
    else{
        sort(vp.begin(),vp.end(),lexicoCompare);
    }

    //3.reversal
    if(reversal == "true"){
        reverse(vp.begin(),vp.end());
    }

    //4. output
    for(int i = 0; i<n; i++){
        cout << vp[i].first << endl;
    }

    return 0;
}

