#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,3,4};
   vector<int>::iterator it=v.begin(); //initializing the iterator
  
    cout<<(*it++)<<endl;
    for(it=v.begin();it<v.end();it++){
        cout<<(*it);
    }

   
}

// Notes 
//1. There is no any difference between it++ and it+1 they both react to just one step next