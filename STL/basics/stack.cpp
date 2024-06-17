#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){

    stack<string> books;

    books.push("cpp");
    books.push("Java");
    books.push("Node JS");
    books.push("Spring boot");

    while (!books.empty()){
        cout << books.top() << endl;
        books.pop();
    }
    return 0;
}
