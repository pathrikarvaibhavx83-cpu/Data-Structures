#include <iostream>
using namespace std;

// Larget element in array

int findlargest(int arr[], int n)
{
  int largest = arr[0];
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > largest)
    {
      largest = arr[i];
    }
  }
  return largest;
}

int main()
{
  int arr[] = {3, 2, 1, 5, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  int largest = findlargest(arr, n);
  cout << "Largest element in the array is: " << largest << endl;
  return 0;
}