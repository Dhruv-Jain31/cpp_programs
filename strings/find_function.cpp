#include <iostream>
#include <string>

using namespace std;

int main(){
    string para = "There is STL string class. STL string is quite powerful";

    string word;
    getline(cin,word); // user inputs the word to be searched

    //find function
    int index = para.find(word);  // index =  -1 means word not found

    if(index != -1){
        cout << "first occ. is " << index << endl;
    }
    else{
        cout << "word is not present in string" << endl;
    }

    index = para.find(word,index+1); // to find second occurrence if it exists
    if(index != -1){
        cout << "second occ. is " << index << endl;
    }

    return 0;
}