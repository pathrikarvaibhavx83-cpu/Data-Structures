// second largest element in an array
#include <iostream>
using namespace std;
int findlargest(int arr[], int n)
{
  int largest = arr[0];
  int second_largest = -1;
  for (int i = 1; i < n; i++)
  {
    if (arr[i] > largest)
    {
      second_largest = largest;
      largest = arr[i];
    }
    else if (arr[i] != largest && arr[i] > second_largest)
    {
      second_largest = arr[i];
    }
  }
  return second_largest;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 7, 7, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  int largest = arr[0];
  int second_largest = -1;
  second_largest = findlargest(arr, n);
  if (second_largest == -1)
  {
    cout << "There is no second largest element in the array" << endl;
  }
  else
  {
    cout << "The second largest element in the array is: " << second_largest << endl;
  }
  return 0;
}