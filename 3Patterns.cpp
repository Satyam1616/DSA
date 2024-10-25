// Pattern questions using for loop

#include <iostream>
using namespace std;

// 1 Square Pattern

int main()
{
  // int n = 4;
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j <= n; j++)
  //   {
  //     cout << j<< " ";
  //   }
  //   cout << endl;
  // }

  // Same patter using star

  // int n =4;
  //  for (int i=1; i<=n; i++){
  //   for (int j=1; j<=n; j++){
  //       cout << "* " ;
  //   }
  //   cout << endl;
  //  }

  // same for char- my code

  //   char n = 'D';
  //   for (char i = 'A'; i<=n; i++){
  //     for (char j = 'A'; j<=n; j++){

  //       cout << j ;
  //     }
  //     cout << endl;
  //   }
  // return 0;

  // same for char- Teacher code- Better

  // int n =4;

  // for (int i = 0; i<n; i++){
  //   char ch = 'A';
  //   for (int j=0; j<n; j++){
  //     cout << ch;
  //     ch = ch+1;
  //   }

  //   cout << endl;
  // }

  // int n =4;
  // int num =1;

  // for (int i = 0; i<n ; i++){
  //   for(int j=0; j<n; j++){
  //     cout<< num<< " ";
  //     num++;
  //   }
  //   cout<< endl;
  // }

  // cout <<"after pattern: " << num << endl; // 17

  // same for char

  // int n =3;
  // char ch ='A';

  // for ( int i =0; i<n ; i++){
  //   for (int j= 0; j<n; j++){
  //     cout<< ch << " ";
  //     ch++;
  //   }
  //   cout<< endl;
  // }

  // same - by my own

  // int n=3;
  // char ch= 'A';
  // for(int i=0; i<n ; i++){
  //   for (int j=0; j< n; j++){
  //       cout<< ch << " ";
  //       ch++;
  //   }
  // cout<< endl;
  // }

  // Triangle Pattern

  // int n=4;

  // for(int i=0; i<n;i++){
  //   for(int j=0; j<i+1; j++){
  //     cout<< "* ";
  //   }
  //     cout<< endl;
  // }

  // same for numbers

  // int n = 4;
  //
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < i + 1; j++)
  //   {
  //     cout << (i + 1)<< " ";
  //     num++;
  //   }
  //   cout << endl;
  // }

  // Same for character

  //   int n = 4;

  // for (int i = 0; i < n; i++) {
  //     for (int j = 0; j < i + 1; j++) {
  //         cout << (char)('A' + i) << " ";  // Print character based on the current row (i)
  //     }
  //     cout << endl;  // Move to the next line after each row
  // }

  // Same but now columns is of same number

  // int n=4;
  // for(int i=0; i <n; i++){
  //   for (int j=1; j<=i+1; j++){
  //     cout<< j<< " ";
  //   }
  //   cout<<endl;
  // }

  // Reverse Triangle Pattern

  // int n =4;
  // for(int i=0; i<n;i++){
  //   for(int j=i+1; j>0;j--){
  //     cout<<j<<" ";
  //   }
  //   cout<<endl;
  // }

  // Floyd's Triangle Pattern

  // int n = 4;
  // int num = 1;

  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = i + 1; j > 0; j--)
  //   {
  //     cout << num << " ";
  //     num++;
  //   }

  //   cout<<endl;
  // }

  // Inverted Triangle Pattern

  // int n=4;
  // for(int i=0; i<n; i++){
  //   for(int j=0; j<i; j++){
  //     cout <<" ";
  //   }
  //   for(int j=0; j<n-i; j++){
  //     cout<< (i+1);
  //   }

  //   cout<<endl;
  // }

  // Pyramid Pattern

  //   int n = 4;
  // for (int i = 0; i < n; i++) {
  //     // Print leading spaces
  //     for (int j = 0; j < n - i - 1; j++) {
  //         cout << " ";
  //     }

  //     // Print increasing numbers
  //     for (int j = 1; j <= i + 1; j++) {
  //         cout << j;
  //     }

  //     // Print decreasing numbers
  //     for (int j = i; j >= 1; j--) {
  //         cout << j;
  //     }

  //     cout << endl;
  // }

  // return 0;
  // }

  //   //Hollow Diamond Pattern

  //   int n = 4;
  // for (int i = 0; i < n; i++) {
  //     // Print leading spaces
  //     for (int j = 0; j < n - i - 1; j++) {
  //         cout << " ";
  //     }

  //     // Print the first '*'
  //     cout << "*";

  //     // Print spaces between the stars if i > 0
  //     if (i != 0) {
  //         for (int j = 0; j < 2 * i - 1; j++) {
  //             cout << " ";
  //         }
  //         // Print the second '*'
  //         cout << "*";
  //     }

  //     // Move to the next line after each row
  //     cout << endl;
  // }
  //     //bottom part

  //     for (int i=0; i<n-1; i++){
  //       //spaces
  //       for(int j=0; j<i+1; j++){
  //         cout<< " ";
  //       }

  //       cout<< "*";
  //       if(i!= n-2){
  //         //spaces
  //         for(int j=0; j<2*(n-i)-5; j++){
  //           cout<< " ";
  //         }

  //         cout<<"*";
  //       }
  //       cout<<endl;
  //     }


    //Butterfly Pattern

    int n=4;
    // *       *
    // **     **
    // ***   ***
    // **** ****
    // ***   ***
    // **     **
    // *       *
  return 0;
}