#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
  vector<int> a = {1, 3, 4, 2, 6, 5};
  int temp = INT_MIN;
  cout << "ARRAY BEFORE SORT :";
  for (int v = 0; v < a.size(); v++)
  {
    cout << a[v];
  }
  cout << endl;
  // sorting

  for (int i = 0; i < a.size(); i++)
  {

    for (int j = i + 1; j < a.size(); j++)
    {
      if (a[i] > a[j])
      {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  cout << "ARRAY AFTER SORT:";
  for (int p = 0; p < a.size(); p++)
  {
    cout << a[p];
  }
  cout << endl;
}
