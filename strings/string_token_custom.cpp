#include <iostream>
using namespace std;

char *my_strtok(char *str, char delim){}

int main(){
    char s[1000];
    cin.getline(s,1000);

    //strtok
    char *token = my_strtok(s,' ');

    while (token != NULL){
        cout << token << endl;
        token = my_strtok(NULL,' ');
    }

    return 0;
}