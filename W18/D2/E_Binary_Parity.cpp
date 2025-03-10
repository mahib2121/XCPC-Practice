#include <bits/stdc++.h>
using namespace std;

string decToBinary(int n)
{
    int len = (int)(log2(n));
    return bitset<64>(n).to_string().substr(64 - len - 1);
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s = decToBinary(n);
        long long int sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            sum += s[i];
        }
        if (sum % 2 == 0)
        {
            cout << "EVEN" << endl;
        }
        else
        {
            cout << "ODD" << endl;
        }
    }

    return 0;
}
