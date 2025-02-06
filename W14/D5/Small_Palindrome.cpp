#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        string ans;
        
        int k = a / 2;
        int x = b / 2;

        ans.append(k, '1');  
        ans.append(x, '2');  
        
        if (a % 2 == 1) ans += '1'; 
        if (b % 2 == 1) ans += '2';  
        
        ans.append(x, '2');  
        ans.append(k, '1'); 

        cout << ans << endl;
    }
    
    return 0;
}
