#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0)
        cout << "It's a Positive number\n";
    else if (num < 0)
        cout << "It's a Negative number\n";
    else
        cout << "Zero\n";

    return 0;
}

