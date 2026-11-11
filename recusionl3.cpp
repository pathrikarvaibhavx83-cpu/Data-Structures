#include <iostream>
#include <vector>
using namespace std;

void printS(int i, vector<int> &ds, vector<int> &current)
{
  if (i == ds.size())
  {
    for (auto x : current)
    {
      cout << x << " ";
    }
    cout << endl;
    return;
  }

  // pick condiion
  current.push_back(ds[i]);
  printS(i + 1, ds, current);
  // not pick condition
  current.pop_back();
  printS(i + 1, ds, current);
}

int main()
{
  vector<int> ds = {3, 2, 1};
  vector<int> current;
  printS(0, ds, current);
  return 0;
}