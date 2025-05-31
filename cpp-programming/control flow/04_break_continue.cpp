#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5)
            continue;  //will skip 5
        if (i == 8)
            break;     //will stop at 8
        cout << i << " ";
    }

    return 0;
}

