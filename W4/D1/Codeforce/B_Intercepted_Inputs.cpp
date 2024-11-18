#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k;
    cin >> k; // Total number of integers in the input stream
    vector<int> v(k);

    for (int i = 0; i < k; i++) {
        cin >> v[i];
    }

    unordered_set<int> st(v.begin(), v.end()); // Store all elements for quick lookup

    int a = -1, b = -1;

    // Iterate over all possible divisors of k
    for (int n = 1; n * n <= k; n++) {
        if (k % n == 0) {
            int m = k / n; // Compute the other dimension
            if (st.count(n) && st.count(m)) {
                a = n;
                b = m;
                break; // Any valid pair works
            }
        }
    }

    if (a != -1 && b != -1) {
        cout << a << " " << b << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // Number of test cases
    while (t--) {
        solve();
    }

    return 0;
}
