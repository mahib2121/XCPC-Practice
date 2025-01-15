#include <bits/stdc++.h>
using namespace std;

string invertBinaryString(const string &b)
{
    string inverted = b;
    for (char &ch : inverted)
    {

        if (ch == '0')
        {
            ch = '1';
        }
        else
        {
            ch = '0';
        }
    }
    return inverted;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string b;
        cin >> b;
        cout << invertBinaryString(b) << endl;
    }
    return 0;
}
