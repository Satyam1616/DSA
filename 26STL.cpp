#include <iostream>
#include <vector>
using namespace std;
int main(){

  vector<int> vec = {1,2,3,4,5};


  // vec.erase(vec.begin()+1, vec.begin()+3);

  //vector<int> vec(10, -1); // dynamic programming - tabulation DP[][]

  // vec.insert(vec.begin()+2, 100);
  vec.clear();
  for(int val: vec) {
    cout << val <<" ";
  }

  cout <<  endl;

  // cout<<"size: "<< vec.size() << endl;
  // cout << "cap: " << vec.capacity() << endl;
  cout << "is empty: " << vec.empty() << endl;

   
  
  return 0;
}

//in vector the data is added in such a way that the if the size is 1 and we increase it it will increase its size but the previus one will be stored at it's place and the new one added to the last.//

