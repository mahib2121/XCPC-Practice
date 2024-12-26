#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n + 1); // Use 1-based indexing
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }

        vector<bool> visited(n + 1, false);
        vector<int> cycle_lengths;

        // Calculate cycle lengths
        for (int i = 1; i <= n; i++) {
            if (!visited[i]) {
                int length = 0, curr = i;
                while (!visited[curr]) {
                    visited[curr] = true;
                    curr = v[curr];
                    length++;
                }
                cycle_lengths.push_back(length);
            }
        }

        // If there's only one cycle, no cost is required
        if (cycle_lengths.size() == 1) {
            cout << 0 << endl;
            continue;
        }

        // Minimize cost to merge cycles
        long long total_cost = 0;
        priority_queue<int, vector<int>, greater<int>> pq(cycle_lengths.begin(), cycle_lengths.end());

        while (pq.size() > 1) {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            total_cost += a + b;
            pq.push(a + b);
        }

        cout << total_cost << endl;
    }

    return 0;
}
