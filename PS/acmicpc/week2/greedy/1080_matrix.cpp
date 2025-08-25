/*
    https://www.acmicpc.net/problem/1080
*/

#include <iostream>
#include <vector>
using namespace std;

// Flip the 3x3 matrix centered at (x, y)
void flip(int x, int y, vector<vector<int>> &a) {
    for (int i = x-1; i <= x+1; i++) {
        for (int j = y-1; j <= y+1; j++) {
            a[i][j] = 1 - a[i][j]; // Flip 0 to 1 and 1 to 0
        }
    }
}
int main() {
    int n, m;
    cin >> n >> m;  // n: row, m: column
    vector<vector<int>> a(n, vector<int>(m));
    for (int i =0; i <n; i++) {
        for (int j=0; j <m; j++) {
            char c;
            cin >> c;
            a[i][j] = c - '0'; // Convert char to int ex a[i][j] = '1' - '0' = 1
        }
    }

    vector<vector<int>> b(n, vector<int>(m));
    for (int i =0; i <n; i++) {
        for (int j=0; j <m; j++) {
            char c;
            cin >> c;
            b[i][j] = c - '0';
        }
    }

    int ans = 0;
    for (int i =0; i <= n-3; i++) {
        for (int j=0; j <= m-3; j++) {
            if (a[i][j] != b[i][j]) { // If the top-left corner is different, flip the 3x3 matrix
                ans++;
                flip(i+1, j+1, a);
            }
        }
    }

    for (int i =0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (a[i][j] != b[i][j]) {
                cout << -1 << '\n';
                return 0;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
