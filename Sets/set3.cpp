//Implementing important key points
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<string> s;
     s.insert("mku");
    s.insert("abc");
    s.insert("bch");
   
    s.insert("vgt");
    s.insert("mku");
    auto it= s.find("mku");
  if(it !=s.end()){
    s.erase(it);
  }
  for(auto &v:s){
    cout<<v<<endl;

  }
   
}