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
    books.emplace("Typescript");

    while (!books.empty()){
        cout << books.top() << endl;
        books.pop();
    }
    cout << books.empty();
    return 0;

}
