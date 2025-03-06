// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;


// //Time Complexity : O(N)
// //Space Complexity : O(1)

// class Solution{
//   public:
//     int findMaxConsecutiveOnes(vector<int> arr){
//       int n = arr.size();
//       int cnt = 0;
//       int max1 = 0;

//       for(int i = 0; i<n; i++){
//         if(arr[i] == 1){
//           cnt++;
//         } else{
//           cnt = 0;
//         }
//         max1 = max(max1, cnt);
//       }
//       return max1;
//     }
// };

// int main(){
//   vector<int> arr = {1,1,0,1,1,1};
//   Solution obj;
//   int ans = obj.findMaxConsecutiveOnes(arr);
//   cout <<"The maximum number of ones are: "<< ans;
//   return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
  public:
  int findMaxOne(vector<int> arr){
    int n = arr.size();
    int cnt = 0;
    int max1 = 0;

    for(int i = 0; i<n ; i++){
      if(arr[i] == 1){
        cnt++;
      } else{
        cnt = 0;

      }
      max1 = max(max1, cnt);
    }
    return max1;
  }
};

int main(){
  vector<int> arr = {1,1,0,0,0,1,1,1,1,1};
  Solution obj;
  int ans = obj.findMaxOne(arr);
  cout << "Max ones are: " << ans;

  return 0;

}