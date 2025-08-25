using namespace std;
#include <iostream>
#include <vector>

int main() {
    int n, k;
    cin >> n >> k; // n: number of coin types, k: target amount
    vector<int> coins(n);

    for (int i =0; i < n; i++) {
        cin >> coins[i];  // Read coin denominations
    }

    int ans = 0;
    for (int i = n-1; i >= 0; i--) {
        if (k == 0) break;

        ans += k / coins[i];
        k %= coins[i]; // Update remaining amount

    }
    cout << ans << '\n';
    return 0;
}
