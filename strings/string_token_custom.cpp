#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

char *my_strtok(char *str, char delim){

    static char *input = NULL;
    if (str != NULL){
        input = str;  // points to first word of the string
    }

    if(input == NULL){
        return NULL;
    }

    char *token = new char[strlen(input) + 1];
    int i = 0;

    for(; input[i] != '\0'; i++){
        if(input[i] != delim){
            token[i] = input[i];
        }
        else{
            token[i] = '\0';
            input = input + i + 1; // updating the static variable
            return token;
        }
    }

    token[i] = '\0';
    // reseting input token as well
    input = NULL;
    return token;
}

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