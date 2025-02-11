#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int left = v[0], right = v[0];
        for (int i = 1; i < n; i++)
        {
            if (v[i] + 1 == left)
                left = v[i];
            else if (v[i] - 1 == right)
                right = v[i];
            else
            {
                cout << "NO"<<endl;
                
            }
            
        }
       cout << "YES"<<endl; 
    }
    return 0;
}
