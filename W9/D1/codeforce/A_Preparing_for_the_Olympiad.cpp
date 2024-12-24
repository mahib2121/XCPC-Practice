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

        vector<int> v1(n); 
        vector<int> v2(n);

        for (int i = 0; i < n; i++) {
            cin >> v1[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> v2[i];
        }

        int max_diff = INT_MIN;

        
        int subsets = (1 << n); 
        for (int mask = 0; mask < subsets; mask++) {
            int m = 0, s = 0;

            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) { 
                    m += v1[i];
                    if (i + 1 < n) { 
                        s += v2[i + 1];
                    }
                }
            }

            if (m-s>max_diff ){
                max_diff = m-s;
            }
            //max_diff = max(max_diff, m - s);
        }

        cout << max_diff << endl;
    }

    return 0;
}
