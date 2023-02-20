#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<pair<int,int>> v={{1,2},{3,4},{5,9}};
 vector<pair<int,int>> ::iterator it= v.begin();
 for( it=v.begin();it<v.end();it++){
    cout<<(*it).first<<" "<<(*it).second<<endl;

 }

}