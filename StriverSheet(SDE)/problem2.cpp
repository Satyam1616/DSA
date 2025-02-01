#include <iostream>
#include <vector>
using namespace std;

long long nCr(int n, int r) {
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

long long pascalTriangle(int r, int c) {
    long long element = nCr(r - 1, c - 1);
    return element;
}

int main()
{
    int r = 5; // row number
    int c = 3; // col number
    long long element = pascalTriangle(r, c);
    cout << "The element at position (r,c) is: " << element << "\n";
    return 0;
}
