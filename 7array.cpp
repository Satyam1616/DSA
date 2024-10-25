// // // #include <iostream>
// // // using namespace std;

// // // int main(){
// // //   const int size = 5;  // Make size a constant
// // //   int marks[size];

// // //   for(int i=0; i<size; i++){
// // //     cin >> marks[i];
// // //   }

// // //   for(int i=0; i<size; i++){
// // //     cout << marks[i] << endl;
// // //   }

// // //   return 0;
// // // }

// // // smallest of an array

// // #include <iostream>
// // #include <climits> // For INT_MAX and INT_MIN
// // using namespace std;

// // int main()
// // {
// //     int nums[] = {5, 15, 22, 1, -15, -24};
// //     int size = 6;

// //     int smallest = INT_MAX;
// //     int largest = INT_MIN;
// //     int smallestIndex = -1;
// //     int largestIndex = -1;  // Missing semicolon was added here

// //     for (int i = 0; i < size; i++)
// //     {
// //         // Corrected typo: 'num' -> 'nums'
// //         if (nums[i] < smallest)
// //         {
// //             smallest = nums[i];
// //             smallestIndex = i;
// //         }
// //         if (nums[i] > largest)
// //         {
// //             largest = nums[i];
// //             largestIndex = i;
// //         }
// //     }

// //     cout << "Largest = " << largest << " at index " << largestIndex << endl;
// //     cout << "Smallest = " << smallest << " at index " << smallestIndex << endl;

// //     return 0;
// // }

// // Pass by reference

// // #include <iostream>
// // using namespace std;

// // void changesArr(int arr[], int size)
// // {
// //   cout << "in function\n";

// //   for (int i = 0; i < size; i++)
// //   {
// //     arr[i] = 2 * arr[i];
// //   }
// // }

// // int main()
// // {
// //   int arr[] = {1, 2, 3};

// //   changesArr(arr, 3);

// //   for (int i = 0; i <3; i++){
// //     cout << arr[i] << " ";
// //   }
// //   cout << endl;

// //   return 0;
// // }

// // Linear Search

// #include <iostream>
// using namespace std;
// int linearSearch(int arr[], int sz, int target){
//     for (int i=0; i < sz; i++){
//       if(arr[i]== target){ // FOUND
//         return i;
//       }
//     }
//     return -1;
// }
// int main()
// {

//   int arr[] = { 4, 2, 7, 8, 1, 2,5};
//   int sz = 7;
//   int target = 5;

//   cout << linearSearch(arr, sz, target ) << endl;
//   return 0;
// }
// //   for (int i = 0; i < sz; i++)
// //   {
// //     if (arr[i] == 5)
// //     {
// //       return i;
// //     }
// //     else
// //     {
// //       return -1;
// //     }
// //   }
// // }

// Reverse an Array-   2 pointer approach

#include <iostream>
using namespace std;

void reverseArray(int arr[], int sz)
{
  int start = 0, end = sz - 1;

  // Corrected while loop condition
  while (start < end)
  {
    // Fixed capitalization and swapped elements correctly
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

int main()
{
  int arr[] = {4, 2, 7, 8, 1, 2, 5};
  int sz = sizeof(arr) / sizeof(arr[0]); // Calculate array size dynamically
  reverseArray(arr, sz);

  // Output the reversed array
  for (int i = 0; i < sz; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}
