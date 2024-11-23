#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main(){
//   vector<int> vec = {1, 2, 3, 4, 5, 6};

//   reverse(vec.begin()+1, vec.begin()+3);

//   for(auto val : vec){
//     cout << val << endl;
//   }
//   cout << endl;

  string s = "abc";
  // next_permutation(s.begin(), s.end());
  prev_permutation(s.begin(), s.end());

  cout << s << endl;

  return 0;
}