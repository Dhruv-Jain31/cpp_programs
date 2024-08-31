#include <iostream>
#include <string>

using namespace std;

int main(){
    string para = "There is STL string class. STL string is quite powerful . STL is great for DSA STL is STL";

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

    index = para.find(word,index+1);

    // now printing all occurrences
    while(index != -1){
        cout << "occ. of word is at " << index << endl;
        index = para.find(word,index+1);
    }

    return 0;
}