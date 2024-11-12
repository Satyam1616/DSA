#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int> vec; // 0
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);
  vec.push_back(5);
  vec.pop_back();

  vec.emplace_back(6);

  for(int val: vec) {
    cout << val <<" ";
  }

  cout <<  endl;

  cout <<"front" << vec.front()<< endl;   
  
  cout <<"back" << vec.back()<< endl;   
  
  return 0;
}

//in vector the data is added in such a way that the if the size is 1 and we increase it it will increase its size but the previus one will be stored at it's place and the new one added to the last.//

