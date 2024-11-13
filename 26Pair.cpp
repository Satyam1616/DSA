#include <iostream>
#include <vector>
using namespace std;

int main(){
  // pair<int, pair<char, int>> p = {1,{'a', 3}};

  // cout << p.first <<endl;
  // cout << p.second.first <<endl;
  // cout << p.second.second <<endl;


  vector<pair<int, int>> vec = {{1,2}, {3,4},{5,6},{7,8}};

  vec.push_back({4,5});  // insert at end only
  vec.emplace_back(4,5);  //in-place objects create

  // for(pair<int, int> p : vec) {
  for(auto p : vec) {
    cout << p.first <<" "<<p.second << endl;
  }
  return 0;
}