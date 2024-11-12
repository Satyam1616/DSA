#include <iostream>
#include <vector>
using namespace std;
int main(){

  vector<int> vec1 = {1,2,3,4,5};
  vector<int> vec2 = {vec1};



  //vector<int> vec(10, -1); // dynamic programming - tabulation DP[][]

  

  for(int val: vec2) {
    cout << val <<" ";
  }

  cout <<  endl;

   
  
  return 0;
}

//in vector the data is added in such a way that the if the size is 1 and we increase it it will increase its size but the previus one will be stored at it's place and the new one added to the last.//

