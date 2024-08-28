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
int n=v.size();
int k=20;

if(k>n) k=k%n;

//first time one part will be reverse
int a=0;
int b=n-k-1;
while(a<=b){
  int temp=v[a];
  v[a]=v[b];
  v[b]=temp;
  a++;
  b--;
}

//second part will be reverse
a=n-k;
b=n-1;
while(a<=b){
  int temp=v[a];
  v[a]=v[b];
  v[b]=temp;
  a++;
  b--;
}

//third part will be reverse
a=0;
b=n-1;
while(a<=b){
  int temp=v[a];
  v[a]=v[b];
  v[b]=temp;
  a++;
  b--;
}


for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
return 0;  
}