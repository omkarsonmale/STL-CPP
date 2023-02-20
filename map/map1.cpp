#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string> m;
    m[1]={"abc"};
    m[3]={"pbc"};
    m[5]={"vbc"};
    m[8]={"mbc"};
    for(int i=0;i<m.size();i++){
        cout<<m[i]<<endl;
    }

    for(auto &v:m){                                                 //we are priented map using range based loop
        cout<<v.first<<" "<<v.second<<endl;
    }
    
}
//we can also print map using iterators or also using range based loop
//map prints value in sorted order
// in map keys are stored in sorted order
//It allows only unique keys
