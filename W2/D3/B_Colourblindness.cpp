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
        
        string s, k;
        cin >> s >> k;
        
        bool isValid = true; 
        
        for (int i = 0; i < n; i++) {
            if (s[i] == 'R') {
                if (k[i] != 'R') {
                    isValid = false; 
                    break;
                }
            } else {
                if (k[i] == 'R') {
                    isValid = false;
                    break;
                }
            }
        }
        
        if (isValid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
