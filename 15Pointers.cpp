// #include <iostream>
// using namespace std;

// // {
//   // int  a = 10;
//   // int* ptr = &a;
//   // int** parptr = &ptr;
//   // // int** ptr2 = &ptr;

//   // cout << *(&a) << endl;
//   // cout << *(ptr) << endl;

//   // cout<< **(parptr) << endl;
//   // cout << a << endl;
//   // cout << &a << endl;
//   // cout << ptr << endl;
//   // cout << &ptr << endl;
//   // cout << ptr2 << endl;
//   // cout << &ptr2 << endl;





//   // * -> dereference = value at address


//  // Null pointer
//   // int* ptr = NULL;

//   // int** ptr = NULL;
//   // cout << ptr << endl;
  

// //   //Pass by reference
// //     void changeA(int* ptr){  //pass by reference using pointers
// //       *ptr = 20;
// //     }
// //       int main(){
    
// //   int a = 10;
// //   changeA(&a);

// //   cout<<"inside main function: "<< a <<endl; //20

// //   return 0;
// // }


// // void changeA(int* ptr){
// //   *ptr = 20;
// // }
// // int main(){
// //   int a = 20;
// //   changeA(&a);
// //   cout <<"indisde main function: "<<a<<endl;

// //   return 0;
// // }

// //pass by reference by alias

// void changeA(int &b){
//   b = 20;
// }
// int main(){
//   int a = 20;
//   changeA(a);
//   cout <<"indisde main function: "<<a<<endl;

//   return 0;
// }


// array pointer = constant pointer

#include<iostream>
#include<vector>
using namespace std;

int main(){
  int arr[] = {1, 2, 3,4 ,5};
  cout<< *arr+2 <<endl; //pointer => 1
  return 0;
}


//pointers = ++ or -- increments or decrements the bite size like if  it's 1004 on increment it'll be 1008 and on decreasing 1000 it's for the hexadecimal address

