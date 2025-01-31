 #include <iostream>
 #include <vector>
 using namespace std;

 //time complxity of each merge function is O(n) and mergeSort function is O(nlogn) so overall time complexity is O(nlogn) 
 
 //space complexity is O(n) because we are using a temporary array to store the sorted elements

 void merge(vector<int>&arr, int st, int mid, int end){  //Time complexity: O(n)
  vector<int> temp;
  int i = st, j = mid+1;

  while(i <= mid && j <= end) {
    if(arr[i] <= arr[j]){    //if we want to sort in descending order, change <= to >=
      temp.push_back(arr[i]);
      i++;
    } else {
      temp.push_back(arr[j]);
      j++;
    } 
  }

  while(i <= mid) {
    temp.push_back(arr[i]);
    i++;
  }

  while (j <= end) {
    temp.push_back(arr[j]);
    j++;
  }

  for(int idx = 0; idx <temp.size(); idx++){
    arr[idx+st] = temp[idx];
  }
 }

 void mergeSort(vector<int>& arr, int st, int end) {
  if (st < end) {
    int mid = st + (end - st) / 2;

    mergeSort(arr, st, mid); //left half
    mergeSort(arr, mid+1, end); // right half

    merge(arr, st, mid, end);

  }
 }

 int main() {
  vector<int> arr = {12, 31, 35, 8, 32, 17};

  mergeSort(arr, 0, arr.size()-1);

  for(int val : arr) {
    cout << val << " ";
  }

  cout<< endl;
  return 0;
 }