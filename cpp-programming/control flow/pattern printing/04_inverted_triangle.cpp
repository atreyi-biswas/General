#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "No. of rows and columns: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<"*";
        }
        cout<< "\n";
    }
}
