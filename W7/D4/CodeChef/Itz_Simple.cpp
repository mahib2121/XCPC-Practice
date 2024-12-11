#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;

        vector<int> heights(n);
        for (int i = 0; i < n; i++) {
            cin >> heights[i];
        }

        // Find the tallest chair
        int max_height = *max_element(heights.begin(), heights.end());

        // Compute the sum of all other chairs
        int sum_other_chairs = accumulate(heights.begin(), heights.end(), 0) - max_height;

        // Calculate the combined heights
        int ved_height = k + max_height;
        int varun_height = p + sum_other_chairs;

        // Determine the result
        if (ved_height > varun_height) {
            cout << "Ved\n";
        } else if (ved_height < varun_height) {
            cout << "Varun\n";
        } else {
            cout << "Equal\n";
        }
    }

    return 0;
}