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

//first method
    // for (int i = 0; i < n / 2; i++) {
    //     int temp = v[i];
    //     v[i] = v[n - 1 - i];
    //     v[n - 1 - i] = temp;}
    // for (int i = 0; i < n; i++) {
    //     cout << v[i] << " ";}

//second method
int i=0;
int j=n-1;
while(i<=j){
  int temp=v[i];
  v[i]=v[j];
  v[j]=temp;
  i++;
  j--;
}
for(int i=0;i<n;i++){
cout<<v[i]<<" ";
}


return 0;  
}