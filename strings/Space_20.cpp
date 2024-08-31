/*Given a string write a function to replace all spaces in a string with '%20'. It is given
that the string has sufficient space at the end to hold the additional characters.*/

#include<iostream>
#include<cstring>

using namespace std;

void replace_space(char *str){

    //1. calc spaces
    int spaces = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            spaces +=1;
        }
    }

    int index = strlen(str) + 2*spaces; // there are 3 char to be inserted instead of space,
    // 1 space is there as it is and two more spaces are created
    str[index] = '\0'; // terminate our string with null

    for(int i = strlen(str) - 1; i>=0; i--){
        if(str[i] == ' '){
            str[index-1] = '0';
            str[index-2] = '2';
            str[index-3] = '%';
            index = index - 3;
        }
        else{
            str[index - 1] = str[i];
            index--;
        }
    }
}

int main(){
    char input[1000];
    cin.getline(input,1000);
    replace_space(input);
    cout << input << endl;

    return 0;
}