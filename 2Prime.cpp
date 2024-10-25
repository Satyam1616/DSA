#include <iostream>
using namespace std;

int main(){

  //Prime number

  // int n = 14;
  // bool isPrime = true;

  // for(int i=2; i<n-1;i++){
  //   if(n % i == 0){//non prime
  //   isPrime = false;
  //   break;
  //   }
  // }

  // if (isPrime == true){
  //   cout << "prime no\n";
  // }else{
  //   cout<< "non prime no";
  // }



  int n = 14;
  bool isPrime = true;

  for(int i=2; i*i<n-1;i++){
    if(n % i == 0){//non prime
    isPrime = false;
    break;
    }
  }

  if (isPrime == true){
    cout << "prime no\n";
  }else{
    cout<< "non prime no";
  }

  return 0;
}