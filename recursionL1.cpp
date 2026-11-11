#include <iostream>
using namespace std;

// print N to 0  numbers using recusrion
void fun(int n)
{
  if (n == 0) // base case
    return;
  cout << n << " " << endl;
  fun(n - 1); // recursion call
}
// print 1 to N numbers using recusrion
void print(int n)
{
  if (n == 0)
    return;
  print(n - 1);
  cout << n << " " << endl;
}
int main()
{
  int n;
  cout << "Enter number ";
  cin >> n;
  fun(n);
  cout << "PRINT N TO 1 " << endl;
  print(n);
  cout << "PRINT 1 TO N ";
}
