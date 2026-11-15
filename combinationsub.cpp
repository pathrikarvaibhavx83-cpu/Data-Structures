
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  void findCombination(
      int index,
      int target,
      vector<int> &arr,
      vector<vector<int>> &ans,
      vector<int> &ds)
  {
    // Base case
    if (target == 0)
    {
      ans.push_back(ds);
      return;
    }
    // Base case
    if (index == arr.size())
    {
      return;
    }

    // Pick the element
    if (arr[index] <= target)
    {
      ds.push_back(arr[index]);

      // Same index because reuse is allowed
      findCombination(index, target - arr[index],
                      arr, ans, ds);

      // Backtracking
      ds.pop_back();
    }

    // Not pick the element
    findCombination(index + 1, target, arr, ans, ds);
  }
};

int main()
{
  Solution sol;

  vector<int> arr = {2, 3, 6, 7};
  vector<vector<int>> ans;
  vector<int> ds;

  sol.findCombination(0, 7, arr, ans, ds);

  for (auto combination : ans)
  {
    cout << "[ ";
    for (auto x : combination)
    {
      cout << x << " ";
    }
    cout << "]" << endl;
  }

  return 0;
}
