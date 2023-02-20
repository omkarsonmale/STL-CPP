#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,4,5};                //for(int value :v)== lage size of old for loop
   for(int &value:v){
   cout<<value++<<" ";
   }
   cout<<endl;
    for(int &value:v){
   cout<<value<<" ";
   }
}
//note 
//1. Auto or range based loop makes ous code syntax small 