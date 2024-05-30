#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    string s = "Hello World";

    // length
    cout << "Length of string: " << s.length() << endl;

    // concatenation
    string a1 = "Hello ", b1 = "World";
    string res1 = a1 + b1; // "Hello World"
    cout << "Concatenated string: " << res1 << endl;

    // Equality
    string a2 = "Test", b2 = "Test";
    bool isEqual = (a2 == b2); // true
    cout << "Are strings equal: " << isEqual << endl;
    int compareRes = a2.compare(b2); // = 0 if equal, < 0 if a is smaller, > 0 if a is larger
    cout << "Comparison result: " << compareRes << endl;

    // Substring extraction
    string substr = s.substr(1, 4); // "ello", first argument is starting index and second is length
    cout << "Extracted substring: " << substr << endl;

    // Substring search
    size_t found = s.find("orl"); // First index where "orl" is present in string. If not found returns string::npos
    if (found != string::npos)
        cout << "'orl' found at index: " << found << endl;
    else
        cout << "'orl' not found" << endl;

    // Replacing substring
    s.replace(0, 3, "Hi"); // Replaces 3 characters from index 0 with "Hi"
    cout << "After replace: " << s << endl;

    // Inserting substring
    s.insert(6, "new "); // "Hello new World", Inserts the substring at index 6
    cout << "After insert: " << s << endl;

    // Iterators
    cout << "Characters using iterators: ";
    for (auto it = s.begin(); it != s.end(); ++it)
        cout << *it;
    cout << endl;

    // Erase
    s.erase(2, 3); // Erases 3 characters starting from index 2
    cout << "After first erase: " << s << endl;

    s.erase(s.begin() + 1, s.begin() + 5); // Erases all characters in between indices [1, 5)
    cout << "After second erase: " << s << endl;

    return 0;
}
