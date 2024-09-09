#include <iostream>
using namespace std;

//function definition
// int printHello(){
//   cout << "Hello\n";
//   return 3;
// }

// int main(){

//       //function call /invoke
//       int val = printHello();
//       cout<< "val=" << val <<endl;

    // int sum(int a, int b){
    //   int s = a + b;
    //   return s;
    // }
    // int main(){
    //   cout << sum(10, 5)<< endl;

  //   int min(int a, int b){  //parameters
  //     if(a<b){
  //       return a;
  //     } else{
  //       return b;
  //     }
  //   }
  //   int main(){

  //   cout<<"min = " << min(10 , 5) << endl;  //arguments
  // return 0;
    // }

    //Function to calculate sum of numbers from 1 to N

    // int sumN( int n){
     
    //   int sum =0;
      
    //   for(int i=1; i<=n ; i++){
    //     sum+= i;
    //   }
    //   return sum;
    // }
    // int main(){

    //   cout << sumN(5) <<endl;
    //   cout << sumN(10) <<endl;

    //   return 0;
    // }



//Calculate N factorial

  // int fact(int n){
  //   int fact = 1;
  //   for(int i=1 ; i<=n; i++){
  //       fact*= i;
  //   }
  //   return fact;
  // }

  // int main(){
  //   cout<<fact(4)<<endl;
  //   cout<<fact(5)<<endl;
  // return 0;
  // }

  //Calculate som of digits of a number

  // int sumOfDigits(int num){
  // int digSum = 0;
  
  // while(num > 0){
  //   int lastDig = num % 10;
  //   num/= 10;

  //   digSum += lastDig;
  // }

  // return digSum;
  // }

  // int main(){
  //   cout<< "sum = " << sumOfDigits(2356)<< endl;

  //   return 0;
  // }

  //Calculate nCr binomial coefficient for n & r

 int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;  // Corrected the multiplication here
    }
    return fact;
}

int nCr(int n, int r) {
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n - r);

    return fact_n / (fact_r * fact_nmr);  // Returning the computed nCr value
}

int main() {
    int n = 8, r = 2;
    cout << "nCr(" << n << ", " << r << ") = " << nCr(n, r) << endl;

    return 0;
}

