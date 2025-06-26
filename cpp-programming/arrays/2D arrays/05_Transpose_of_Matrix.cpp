#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter number of rows: ";
    cin>>m;
    int n;
    cout<<"Enter number of columns: ";
    cin>>n;

    
    int arr[m][n];
    cout<<"Enter elements: ";
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int j=0; j<=n-1; j++){
        for(int i=0; i<=m-1; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
