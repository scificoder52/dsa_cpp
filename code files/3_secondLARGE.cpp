#include <iostream>
#include <limits.h>

using namespace std;
int main()
{
  int n;
  cout<<"enter number for array";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int max=INT_MIN;
  for(int i=0;i<n;i++){
    if(max<arr[i]) max=arr[i];
  }
  
  cout<<"largest number is:"<<max<<endl;
  int smax=INT_MIN;
  for(int i=0;i<n;i++){
    if(arr[i]!=max && smax<arr[i]) smax=arr[i];
  }
  cout<<"second largest number is:"<<smax;

    }