#include<bits/stdc++.h>

using namespace std;

int main() {
    long t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n; 
        vector<long> a(n); 
        for (long p = 0; p < n; p++) {
            cin >> a[p]; 
        }

        vector<long> b(n);
        bool possible = true; 
        long mxd = -1; 

        for (long p = 0; p < n; p++) {
            cin >> b[p]; 
            if (b[p] > a[p]) { 
                possible = false; 
            }
            long diff = a[p] - b[p]; 
            mxd = (mxd > diff) ? mxd : diff; 
        }

        for (long p = 0; possible && p < n; p++) {
            long diff = a[p] - b[p];
            if (diff < mxd && b[p] != 0) { 
                possible = false; 
            }
        }

        cout << (possible ? "YES" : "NO") << endl; 
    }

    return 0;
}
