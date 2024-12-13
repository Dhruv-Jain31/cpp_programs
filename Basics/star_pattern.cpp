#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Input the number of rows

    int i = 1; // Row counter
    while (i <= n) {
        // Print spaces
        int spaces = 1;
        while (spaces <= n - i) {
            cout << " ";
            spaces = spaces + 1;
        }

        // Print asterisks
        int num = 1;
        while (num <= 2 * i - 1) {
            cout << "*";
            num = num + 1;
        }

        // Move to the next row
        cout << endl;
        i = i + 1;
    }

    return 0;
}
