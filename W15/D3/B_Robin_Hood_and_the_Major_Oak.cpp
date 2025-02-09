#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int total;
        if (n < k) {
            total = (n * (n + 1)) / 2;
        } else {
            total = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;
        }

        if (total % 2 == 0) {
            cout << "YES\n";  // Even number of leaves
        } else {
            cout << "NO\n";   // Odd number of leaves
        }
    }

    return 0;
}
