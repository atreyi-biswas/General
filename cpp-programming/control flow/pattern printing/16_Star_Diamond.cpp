#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "No. of lines: ";
    cin >> n;

    int nst = 1;
    int nsp = n - 1;

    for(int i = 1; i <= (2 * n - 1); i++) {
       
        for(int j = 1; j <= nsp; j++) {
            cout << " ";
        }

        for(int k = 1; k <= nst; k++) {
            cout << "*";
        }

        cout << endl;

        if(i < n) {
            nsp--;
            nst += 2;
        } else {
            nsp++;
            nst -= 2;
        }
    }

}
