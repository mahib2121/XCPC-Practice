#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t; 

    while (t--) {
        ll n, q;
        cin >> n >> q;

        vector<ll> a(n);
        for (ll p = 0; p < n; p++) {
            cin >> a[p];
        }

        vector<ll> b;
        for (ll p = 0; p < q; p++) {
            ll x;
            cin >> x;
            if (b.empty() || b.back() > x) {
                b.push_back(x); 
            }
        }

        vector<ll> w(b.size());
        ll prev = 0;
        for (ll p = w.size() - 1; p >= 0; p--) {
            w[p] = (1LL << (b[p] - 1)) + prev; 
            prev = w[p];
        }

        for (ll p = 0; p < a.size(); p++) {
            for (ll u = 0; u < b.size(); u++) {
                if (a[p] % (1LL << b[u]) == 0) { 
                    a[p] += w[u]; 
                    break;
                }
            }
        }

        for (ll p = 0; p < n; p++) {
            cout << a[p] << " "; 
        }
        cout << "\n";
    }

    return 0;
}
