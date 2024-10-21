#include <iostream>
using namespace std;
int main()
{
  float price = 100.25f;
  float* ptr = &price;
  int a = 10;
  cout << ptr << endl;
  cout << &a << endl;
  cout << &ptr << endl;
  return 0;
}