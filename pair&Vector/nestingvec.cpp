#include<iostream>
#include<vector>
using namespace std;
void printvect(vector < pair<int,int>>v){
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
int main(){
    vector <pair<int,int>> v(10);
   printvect(v);
    
}