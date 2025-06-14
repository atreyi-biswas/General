#include<iostream>
using namespace std;


int fact(int x){
    int f = 1;
    for(int i=1; i<=x; i++){
    f=f*i;
   }
    return f;
}

int combination(int n, int r){
    int com = fact(n) / (fact(r)*fact(n-r));

    return com;
}

int permutation(int n, int r){
    int per = fact(n) / fact(n-r);

    return per;
}
int main() {
    int n,r;
    cout<<"Enter value of n: ";
    cin>>n;
    cout<<"Enter value of r: ";
    cin>>r;
    
    cout<<"permutation: "<<permutation(n,r)<<endl;
    cout<<"combination: "<<combination(n,r)<<endl; 
}
