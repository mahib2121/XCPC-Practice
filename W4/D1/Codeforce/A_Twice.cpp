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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        set<int> used;
        int answer = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                
                if (a[i] == a[j] && used.find(i) == used.end() && used.find(j) == used.end()) {
                    answer++;
                    used.insert(i);
                    used.insert(j);
                }
            }
        }
        cout << answer << endl;
    }

    return 0;
}
