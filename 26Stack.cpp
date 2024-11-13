//LIFO- last in first out

#include <iostream>
#include <stack>
using namespace std;

int main(){
  stack<int> s;

  s.push(1);
  s.push(2);
  s.push(3);

  stack<int> s2;
  s2.swap(s);

  cout <<"s size: "<< s.size() << endl; //0
  cout <<"s size: "<< s2.size() << endl; //3

  // while(!s.empty()){
  //   cout <<s.top() << " ";
  //   s.pop();
  // }

  // cout << endl;

  return 0;
}