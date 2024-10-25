#include <iostream>

using namespace std;

class oops
{
public:
  int a, b, sum;

  void input();
  void cal();
  void display();
};

void oops::input()
{
  cout << "Enter the value of a and b: ";
  cin >> a >> b;
}

void oops::cal()
{
  sum = a + b;
}

void oops::display()
{
  cout << "Sum of a and b: " << sum << endl;
}

int main()
{
  oops S;

  S.input();
  S.cal();
  S.display();

  return 0;
}
