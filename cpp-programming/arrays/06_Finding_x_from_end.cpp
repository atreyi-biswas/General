using namespace std;
#include<vector>
#include<algorithm>

int main(){
    vector<int> v;
    v.push_back(1);
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

    int  x = 0;
    int  idx = -1;
    for(int i=0; i<v.size(); i++){
        if(v[i]==x) idx=i;
    }
    cout<<idx;

    /* {OR}
    
    for(int i=v.size(); i>=0; i--){
        if(v[i]==x){
            idx=i;
            break;
        }
    }
    */
}
