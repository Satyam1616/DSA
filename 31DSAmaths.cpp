// #include <iostream>
// using namespace std;

// string isPrime(int n)
// {

//   for (int i = 2; i * i <= n; i++)
//   {
//     if (n % i == 0)
//     {
//       return "Non-Prime";
//     }
//     return "Prime";
//   }
// }
//   int main()
//   {
//     int n = 42;

//     cout << isPrime(n) << endl;
//   }


//Sieve of Eratosthenes

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0; // No primes less than 2

        vector<bool> isPrime(n, true);
        int count = 0;

        for (int i = 2; i < n; i++) {
            if (isPrime[i]) {
                count++;

                // Start marking multiples from i*i to avoid redundant operations
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        return count;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = sol.countPrimes(n);
    cout << "Number of primes less than " << n << ": " << result << endl;

    return 0;
}
