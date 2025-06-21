#include<iostream>
using namespace std;

int main(){
    int x = 4;
    int *ptr = &x;

    cout<<&x<<endl;
    cout<<ptr;   //prints address
    cout<<*ptr;   //prints value
}
