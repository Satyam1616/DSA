#include <iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if(n == 0 || n == 1) {
            return n;
        }
        return fib(n - 1) + fib(n - 2);
    }
};

int main() {
    Solution sol;
    cout << sol.fib(4) << endl; // Output the 4th Fibonacci number
    return 0;
}
