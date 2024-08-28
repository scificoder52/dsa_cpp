/*
passing array to function
Dynamic allocation
Vectors in C++
operation on vector
problem on array and two pointers
*/


//address of array=address of first element of array

#include<iostream>
using namespace std;

int main(){

int arr[]={1,2,3,4,54};
int *ptr=arr;
// int *ptr=&arr[2];//for storing address of specific element in arr



cout<<*ptr<<endl;
// cout<<ptr[0]<<endl;


// for(int i=0;i<5;i++){
// cout<<ptr[i]<<" ";
// }


for(int i=0;i<5;i++){
  cout<<*ptr<<" ";
  ptr++;
}

cout<<*ptr; //now ab ptr means out of array chala gya

return 0;
}