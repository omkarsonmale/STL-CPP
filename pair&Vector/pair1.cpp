#include<bits/stdc++.h>

using namespace std;
int main(){
    int n=3;
    pair<int ,string> arr[n];
    //p=make_pair(5,"omkar");
    
    arr[0]={0,"om"};
    arr[1]={1,"ramu"};
    
    arr[2]={2,"ajay"};

     //cout<<arr[0].first<<" "<<arr[0].second<<endl;
     //cout<<arr[2].first<<" "<<arr[2].second<<endl;
     
     //swap function
    swap(arr[0],arr[2]);
      
       for(int i=0;i<n;i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;

       }
      
      

       
}