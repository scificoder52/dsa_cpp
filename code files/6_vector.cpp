//Vector in c++=>

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

vector<int>v;
//for inserting 
v.push_back(33);
v.push_back(2);
v.push_back(333);
v.push_back(6);
v.push_back(5);

//for deleting last element
v.pop_back();

//for access a element
// cout<<v[3]<<endl;

//we can edit values
v.at(2)=888;

for(int i=0;i<v.size();i++){
  cout<<v[i]<<" ";
} cout<<endl;
//we can take input in vector as same like array

//sorting function in vector
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++){
  cout<<v[i]<<" ";
} cout<<endl;


return 0;  
}