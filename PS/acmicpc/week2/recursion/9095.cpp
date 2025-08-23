#include <iostream>

int dp[12] = {0, 1, 2, 4, 7, 13, 24, 44, 81, 149, 274, 504};

/*
This code calculates the number of ways to sum up to a given number n using the numbers 1, 2, and 3.
The results are precomputed and stored in the dp array.
*/

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::cout << dp[n] << '\n';
    }
    return 0;
}
