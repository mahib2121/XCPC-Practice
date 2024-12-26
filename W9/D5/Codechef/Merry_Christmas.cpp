#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> v = {1, 2, 4};
    sort(v.begin(), v.end());
    int count = 0;
    for (int time : v)
    {
        if (n >= time)
        {
            n -= time;
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count << endl;
    return 0;
}
