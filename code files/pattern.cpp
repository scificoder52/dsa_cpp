// #include<iostream>
// using namespace std;

// int main(){
// for(int i=1;i<=4;i++){
//   for(int j=1;j<=4;j++){
//     cout<<i;
//   }
//   cout<<"\n";
// }
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   for (int i = 4; i >= 1; i--)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       cout << "*";
//     }
//     cout << "\n";
//   }
//   return 0;
// }



// /*
// 1
// 12
// 123
// 1234
// */
// #include <iostream>
// using namespace std;
// int main(){
//   for (int i = 1; i <= 4; i++){
//     for(int j=1;j<=i;j++){
//       cout<<j;
//     }
//     cout<<endl;
//   }
//   return 0;
// }



/*
* * *
*   * 
*   *
* * *

*/
#include <iostream>
using namespace std;
int main()
{
  for (int i = 1; i <=4; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}