//deque: double ended queue
//dequeue - pop element from a queue

//in list random access is possible- coz it's doublee(DLL)
// in deque random access is possible(dynamic arrays)
#include <iostream>
#include <vector>
#include <deque>
#include <list>
using namespace std;
int main(){
  // list<int> d = {1,2,3,4,5}; - give error on doing d[2]

  deque<int> d = {1,2,3,4,5};

  for(int val: d) {
    cout << val << " ";
  }

  cout << endl;
  cout << d[2]<< endl;

  return 0;
}