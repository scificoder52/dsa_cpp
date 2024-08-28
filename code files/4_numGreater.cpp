#include <iostream>
using namespace std;
int main()
{
  int arr[6]={21,22,23,12,21,55};
  int num;
  cout<<"enter number you want to check";
  cin>>num;
  int count=0;
  for(int i=0;i<6;i++){
if(arr[i]>num) count+=1;
  }
cout<<count;



}