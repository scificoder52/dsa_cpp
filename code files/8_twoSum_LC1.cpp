#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

vector<int>v;
v.push_back(7);
v.push_back(5);
v.push_back(3);
v.push_back(6);
v.push_back(2);
v.push_back(11);
v.push_back(8);
v.push_back(0);
int sum=8;
for(int i=0;i<v.size();i++){
  for(int j=i+1;j<v.size();j++){
    if(v[i]+v[j]==sum){
      cout<<'('<<v[i]<<','<<v[j]<<')'<<endl;
    }
  }
}
return 0;  
}