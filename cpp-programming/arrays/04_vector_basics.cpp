#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector<int> v;
    v.push_back(1);    //creating elements in array
    v.push_back(5);
    v.push_back(10);
    v.push_back(0);
    v.push_back(6);
    v.push_back(3);
    v.push_back(0);
    v.push_back(9);
    v.push_back(2);
    v.push_back(7);
    v.push_back(4);
    v.push_back(8);
    v.at(3)=14;    //updates 3rd element i.e, 0 --> 14

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
  
    v.pop_back();   //removing elements from array from the end

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
