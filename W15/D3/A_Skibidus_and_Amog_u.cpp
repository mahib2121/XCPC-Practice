#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        string w;
        cin >> w;
        int l = w.size();
        
        
        if (l >= 2 && w.substr(l - 2) == "us") {
            w = w.substr(0, l - 2) + "i"; 
        }

        cout << w << endl;
    }
    return 0;
}
