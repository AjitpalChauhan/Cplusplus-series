#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int i = 1;
  while (i <= n)
  {
    int j = i;
    int space = i - 1;
    while (space)
    {
      cout << " ";
      space--;
    }
    while(j<=n){
      cout<< j;
      j++;
    }
    cout << endl;
    i++;
  }
}

// n=4
// 1234
//  234
//   34
//    4