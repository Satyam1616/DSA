// // // // // // // 1.Prime Number

// // // // // // // // #include <iostream>
// // // // // // // // using namespace std;

// // // // // // // // string isPrime(int n)
// // // // // // // // {

// // // // // // // //   for (int i = 2; i * i <= n; i++)
// // // // // // // //   {
// // // // // // // //     if (n % i == 0)
// // // // // // // //     {
// // // // // // // //       return "Non-Prime";
// // // // // // // //     }
// // // // // // // //     return "Prime";
// // // // // // // //   }
// // // // // // // // }
// // // // // // // //   int main()
// // // // // // // //   {
// // // // // // // //     int n = 42;

// // // // // // // //     cout << isPrime(n) << endl;
// // // // // // // //   }

// // // // // // // //Sieve of Eratosthenes

// // // // // // // #include <iostream>
// // // // // // // #include <vector>
// // // // // // // using namespace std;

// // // // // // // class Solution {
// // // // // // // public:
// // // // // // //     int countPrimes(int n) {
// // // // // // //         if (n <= 2) return 0; // No primes less than 2

// // // // // // //         vector<bool> isPrime(n, true);
// // // // // // //         int count = 0;

// // // // // // //         for (int i = 2; i < n; i++) {
// // // // // // //             if (isPrime[i]) {
// // // // // // //                 count++;

// // // // // // //                 // Start marking multiples from i*i to avoid redundant operations
// // // // // // //                 for (int j = i * i; j < n; j += i) {
// // // // // // //                     isPrime[j] = false;
// // // // // // //                 }
// // // // // // //             }
// // // // // // //         }

// // // // // // //         return count;
// // // // // // //     }
// // // // // // // };

// // // // // // // int main() {
// // // // // // //     Solution sol;
// // // // // // //     int n;
// // // // // // //     cout << "Enter a number: ";
// // // // // // //     cin >> n;

// // // // // // //     int result = sol.countPrimes(n);
// // // // // // //     cout << "Number of primes less than " << n << ": " << result << endl;

// // // // // // //     return 0;
// // // // // // // }

// // // // // // // 2. Digits in a number

// // // // // // #include <iostream>
// // // // // // using namespace std;

// // // // // // void printDigits(int n){
// // // // // //   int count = 0; //Number of digits
// // // // // //   int sum = 0;  //sum of digit

// // // // // //   while (n != 0)
// // // // // //   {
// // // // // //     int digit = n % 10;
// // // // // //     sum+= digit ; //sum of digit
// // // // // //     count++; //no. of digits
// // // // // //     cout << digit << endl;

// // // // // //     n = n/10;
// // // // // //   }
// // // // // //     cout << count << endl;  // no. of digits
// // // // // //     cout << sum << endl;   //sum of digit
// // // // // // }

// // // // // // int main(){
// // // // // //   int n = 3586;

// // // // // //   printDigits(n) ;
// // // // // //   return 0;
// // // // // // }

// // // // // //ArmStrong Number

// // // // // #include <iostream>
// // // // // using namespace std;

// // // // // bool isArmstrong(int n) {
// // // // //     int copyN = n;
// // // // //     int SumOfCubes = 0;

// // // // //     while (n != 0) {
// // // // //         int dig = n % 10;
// // // // //         SumOfCubes += (dig * dig * dig);
// // // // //         n = n / 10; // Update `n` to avoid an infinite loop
// // // // //     }

// // // // //     return SumOfCubes == copyN;
// // // // // }

// // // // // int main() {
// // // // //     int n = 111;

// // // // //     if (isArmstrong(n)) {
// // // // //         cout << n << " is an Armstrong number\n";
// // // // //     } else {
// // // // //         cout << n << " is not an Armstrong number\n";
// // // // //     }
// // // // //     return 0;
// // // // // }


// // // // // GCD

// // // // #include <iostream>
// // // // using namespace std;

// // // // int isGcd(int a, int b) { // Add parameters a and b, and correct return type
// // // //     int gcd = 1; // Initialize gcd
// // // //     for (int i = 1; i <= min(a, b); i++) { // Use `<=` to include the smallest number
// // // //         if (a % i == 0 && b % i == 0) { // Check if i is a divisor of both a and b
// // // //             gcd = i;
// // // //         }
// // // //     }
// // // //     return gcd; // Return the calculated gcd
// // // // }

// // // // int main() {
// // // //     int num1, num2;
// // // //     cout << "Enter two numbers: ";
// // // //     cin >> num1 >> num2;

// // // //     cout << "GCD of " << num1 << " and " << num2 << " is: " << isGcd(num1, num2) << endl;
// // // //     return 0;
// // // // }

// // // //GCD using Euclid' Algorithm

// // // #include <iostream>
// // // using namespace std;
 
// // // int gcd(int a, int b){
// // //   while(a>0 && b>0){
// // //     if(a>b){
// // //       a = a % b;
// // //     } else {
// // //       b = b % a;
// // //     }
// // //   }

// // //   if(a == 0) return b;
// // //   return a;
// // //   }

// // //   int main(){
// // //     cout << gcd(20,28) << endl;
// // //     return 0;
// // //   }



// // //L.C.M

// // #include <iostream>
// // using namespace std;

// // int gcdRec(int a , int b){
// //   if(b == 0) return a;

// //   return gcdRec(b, a % b);
// // }

// // int lcm(int a , int b){
// //   int gcd = gcdRec(a,b);
// //     return(a*b) / gcd;
// //   }

// //   int main(){
// //     cout << lcm(20, 24) << endl;
// //     return 0;
// //   }


// //Reverse a number

// #include <iostream>
// #include <climits> // For INT_MAX and INT_MIN
// using namespace std;

// class Solution {
// public:
//     int reverse(int n) {
//         int revNum = 0;

//         while (n != 0) {
//             int dig = n % 10;

//             // Check for overflow/underflow
//             if (revNum > INT_MAX / 10 || revNum < INT_MIN / 10)
//                 return 0;

//             revNum = revNum * 10 + dig;
//             n = n / 10;
//         }

//         return revNum;
//     }
// };

// int main() {
//     Solution solution;

//     int num;
//     cout << "Enter an integer: ";
//     cin >> num;

//     int reversedNum = solution.reverse(num);

//     if (reversedNum == 0)
//         cout << "The reversed number causes overflow. Returning 0." << endl;
//     else
//         cout << "Reversed number: " << reversedNum << endl;

//     return 0;
// }




//Palindrome
#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int n) {
        int revNum = 0;

        while (n != 0) {
            int dig = n % 10;

            // Check for overflow/underflow
            if (revNum > INT_MAX / 10 || revNum < INT_MIN / 10)
                return 0;

            revNum = revNum * 10 + dig;
            n = n / 10;
        }

        return revNum;
    }

    bool isPalindrome(int x) {
        if (x < 0) 
            return false; // Negative numbers are not palindromes

        int revNum = reverse(x);
        return x == revNum; // Check if the reversed number matches the original
    }
};

int main() {
    Solution solution;

    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (solution.isPalindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }

    return 0;
}
