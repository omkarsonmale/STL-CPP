//code of array of vector in which we dynamically add row and cloumn
//in that we access  set of vector and vector count of element
#include<iostream>
#include<vector>
using namespace std;
void printvect(vector<int>v){

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}
int main(){
    int N;
    cin>>N;
   vector<int>v[N];
   for(int i=0;i<N;i++){     
    int n;
    cout<<"Vector Size:";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v[i].push_back(x);


    }

   }
      for(int i=0;i<N;i++){
      printvect(v[i]);
      }
}