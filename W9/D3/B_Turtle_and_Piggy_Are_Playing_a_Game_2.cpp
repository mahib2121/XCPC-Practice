#include<bits/stdc++.h>
using namespace std;

int main (){
    

    int t ;
    cin >> t;
    while (t--)
    {
      int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        int x = (n - 1) / 2;
        cout << a[x] << endl;
    }
    return 0;
}
