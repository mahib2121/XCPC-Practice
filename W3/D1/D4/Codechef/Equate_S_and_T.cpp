#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    if (s == t) {
        yes;
        return;
    }
    int i = s.find('a');
    int j = t.find('a');
    if (i != j or i == -1 or j == -1) {
        no;
        return;
    }
    int cnt_s = count(all(s), 'a');
    int cnt_t = count(all(t), 'a');
    if (cnt_s == cnt_t) yes;
    else no;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}