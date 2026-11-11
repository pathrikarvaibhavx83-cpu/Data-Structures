#include <iostream>
using namespace std;
class power
{
  int power;
  int base;

public:
  void setpower()
  {
    cout << "enter the power :";
    cin >> power;
    cout << "enter the base :";
    cin >> base;
  }
  void getpower()
  {
    float result = power * base;
    cout << result;
  }
};

int main()
{
  power p1;
  p1.setpower();
  p1.getpower();

  return 0;
}