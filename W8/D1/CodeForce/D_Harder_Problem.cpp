#include<bits/stdc++.h>

using namespace std;

#define MAX_N 200000

void solve() {
    int t; 
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n); 
        vector<int> b(n); 

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Copying array 'a' to 'b'
        for (int i = 0; i < n; i++) {
            b[i] = a[i];  
        }

        // Output the elements of array 'b'
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    solve();
    return 0;
}
