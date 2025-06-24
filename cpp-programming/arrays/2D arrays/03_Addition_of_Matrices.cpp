#include<iostream>
using namespace std;
int main(){
    int a[2][3]={1, 2, 3, 4, 5, 6};
    int b[2][3]={7, 8, 9, 10, 11, 12};

    //print a;
    for(int i=0; i<=1; i++){
        for(int j=0; j<=2; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //print b;
    for(int i=0; i<=1; i++){
        for(int j=0; j<=2; j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //add a&b
    for(int i=0; i<=1; i++){
        for(int j=0; j<=2; j++){
            cout<<b[i][j]+a[i][j]<<" ";
        }
        cout<<endl;
    }
}
