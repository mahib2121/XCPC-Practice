#include<bits/stdc++.h>
using namespace std ;

int main (){
    

    int t ;
    cin >> t;
    while (t--)
    {
       int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        for (char c : s)
        {
            mp[c]++;
        }
        int result = 0;
        for (char c : "ABCD")
        {
            result += min(n, mp[c]);
        }
        cout << result << endl;
    }
    return 0;
}
