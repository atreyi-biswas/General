#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){
    int x;
    cout<<"Enter target: ";
    cin>>x;
    vector<int> v;
    int n;
    cout<<"Enter array size: ";
    cin>>n;

    cout<<"Enter array elements: ";
    for(int i=0; i<=n; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    
    for(int i=0; i<=v.size()-2; i++){        //to avoid repetitions like (0,a) and (a,0)
        for(int j=i+1; j<=v.size()-1; j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")";
            }
        }
    }
 
}
