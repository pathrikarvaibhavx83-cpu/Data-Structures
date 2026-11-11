#include <iostream>
using namespace std;

int main()
{
  int a[] = {1, 2, 3, 4, 5};
  int b[] = {2, 3, 6, 7, 8};

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (a[i] == b[j])
        cout << "DUPLICATE ELEMENT IS:" << a[i] << endl;
    }
  }
}