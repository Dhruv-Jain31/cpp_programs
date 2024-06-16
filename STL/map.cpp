#include <iostream>
#include <map>
#include <list>
#include <string>

using namespace std;

int main(){

    map<string, list<string>> phonebook;

    phonebook["Dhruv"].push_back("+917037446563");
    phonebook["Dhruv"].push_back("+925683945543");
    phonebook["Dhruv"].push_back("+911731080304");

    phonebook["Anurag"].push_back("+45382848282");
    phonebook["Anurag"].push_back("+874292848291");

    // print function

     for(pair<string, list<string>> item : phonebook){
        cout << item.first << " - ";
        for (string number : item.second) {  //item.second is a list<string> representing the phone numbers 
            cout << number << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
