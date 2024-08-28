#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

vector<int>v;
v.push_back(3);
v.push_back(22);
v.push_back(13);
v.push_back(87);
v.push_back(3);
v.push_back(63);
v.push_back(3);

int num=63;

int idx=-1;
//last se check kiya
for(int i=v.size()-1;i>=0;i--){
  if(v[i]==num) idx=i;
  break;
}
cout<<idx;
return 0;  
}