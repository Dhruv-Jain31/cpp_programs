/* Write a fizzbuzz function that returns a vector<string> with the numbers from 1 to n with the following restrictions:
for multiples of 3 store "Fizz" instead of the number
for multiples of 5 store "Buzz" instead of the number
for numbers which are multiples of both 3 and 5 store "FizzBuzz"
Expected Time Complexity O(N)
Expected Space Complexity O(N)*/

//code
#include <bits/stdc++.h>

using namespace std;

vector<string> fizzbuzz(int n){

    vector<string> result;
    for(int i = 1; i<=n; i++){
        if(i%15 == 0){
            result.push_back("FizzBuzz");
        }

        else if (i%5 == 0){
            result.push_back("Buzz");
        }

        else if(i%3 == 0){
            result.push_back("Fizz");
        }

        else{
            result.push_back(to_string(i));
        }
    }

    return result;
}

int main(){

    vector<string> output = fizzbuzz(30);
    for(string x : output){
        cout<< x <<",";
    }

}