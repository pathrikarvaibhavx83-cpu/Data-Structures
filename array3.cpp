// Smallest and second smalest element in an array
#include <iostream>
#include <climits>
using namespace std;
void findsecsmallest(int arr[], int n)
{
  int smallest = INT_MAX;
  int ssmallest = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] < smallest)
    {
      ssmallest = smallest;
      smallest = arr[i];
    }
    else if (arr[i] > smallest && ssmallest > arr[i])
    {
      ssmallest = arr[i];
    }
  }
  cout << "smallest element in the array is : " << smallest << endl;
  cout << "second smallest element in the array is :" << ssmallest << endl;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 7};
  int n = sizeof(arr) / sizeof(arr[0]);
  findsecsmallest(arr, n);
}