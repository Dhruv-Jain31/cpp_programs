#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;

string unique_substring(string str){
    int i = 0;
    int j = 0;

    int window_len = 0;
    int max_window_len = 0;
    int start_window = -1;

    unordered_map<char,int> m;
    while(j < str.length()){
        char ch = str[j];
        // if it is present in hashmap & index >= start of the current window
        if(m.count(ch) && m[ch] >= 1){
            i = m[ch] + 1;
            window_len = j-1;
        }

        m[ch] = j;
        window_len++;
        j++;

        //update max_window_len at every step
        if (window_len > max_window_len){
            max_window_len = window_len;
            start_window = i;
        }
    }
    return str.substr(start_window,max_window_len);
}

int main(){

	string input;
	cin>>input;

	cout << unique_substring(input);


	return 0;
}