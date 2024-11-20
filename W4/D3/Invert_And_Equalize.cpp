#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        string s;
        cin >> s;

        // int arr[a];
        // for (int i = 0; i < a; i++)
        // {
        //     cin >> arr[i];
        // }
        int zero = 0;
        int one = 0;
        if (a == 1)
        {
            cout << "0" << endl;
        }
        else
        {

            for (int i = 0; i < a-1; i++)
            {
                if (s[i] == '1' && s[i + 1] == '0')
                {
                    zero++;
                }
            }
            for (int i = 0; i < a-1; i++)
            {
                if (s[i] == '0' && s[i + 1] == '1')
                {
                    one++;
                }
               
            }
            
           int max1= max(zero,one);
           cout << max1<< endl;
        }
        
    }
    return 0;
}
