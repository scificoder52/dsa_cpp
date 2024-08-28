#include <iostream>
using namespace std;
int main()
{
int arr[]={11,21,33,22,13};

int num;
cout<<"enter number for linear search:";
cin>>num;

int size=sizeof(arr)/sizeof(arr[0]);

bool flag=false;

for(int i=0;i<size;i++){
  if(arr[i]==num)  flag=true;
}

if(flag==true)  cout<<"number is found";
  else cout<<"number is not found";
    }


