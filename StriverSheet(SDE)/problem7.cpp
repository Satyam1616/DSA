// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr) {
//     int n = arr.size();
//     if (n == 0) return {}; // Caso de borda

//     sort(arr.begin(), arr.end()); // Ordena os intervalos pelo início
//     vector<vector<int>> ans;

//     for (int i = 0; i < n; i++) {
//         int st = arr[i][0];
//         int end = arr[i][1];

//         // Se a lista não estiver vazia e o último intervalo sobrepuser o atual
//         if (!ans.empty() && end <= ans.back()[1]) 
//             continue;

//         // Verifica se há sobreposição com os próximos intervalos
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j][0] <= end) {
//                 end = max(end, arr[j][1]);
//             } else {
//                 break;
//             }
//         }

//         ans.push_back({st, end});
//     }

//     return ans;
// }

// int main() {
//     vector<vector<int>> arr = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};
//     vector<vector<int>> ans = mergeOverlappingIntervals(arr);

//     cout << "Os intervalos mesclados são:" << endl;
//     for (auto it : ans) {
//         cout << it[0] << " " << it[1] << endl;
//     }
//     cout << endl;

//     return 0;
// }



//Optimised Approach

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
  int n = arr.size();

  sort(arr.begin(), arr.end());

  vector<vector<int>> ans;

  for(int i = 0; i< n; i++){

    if(ans.empty() || arr[i][0] > ans.back()[1]){
      ans.push_back(arr[i]);
    }

    else {
      ans.back()[1] = max(ans.back()[1], arr[i][1]); // Fixed incorrect indexing
    }
  }

  return ans;
}

int main(){
  vector<vector<int>> arr = {{1,3}, {8,10}, {2,6}, {15,18}};
  vector<vector<int>> ans = mergeOverlappingIntervals(arr);
  cout << "The merged intervls are: " << endl;

  for(auto it : ans){
    cout << "[" << it[0] << "," << it[1] << "]";
  }

  cout << endl;
  return 0;
}
