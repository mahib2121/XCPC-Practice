// #include <iostream>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         if (n == 1)
//         {
//             cout << 1 << endl;
//         }
//         else if (n >= 2 && n % 2 == 0)
//         {
//             int t = (n / 2) + 1;
//             if (t >= 2)
//             {
//                 cout << t << endl;
//             }
//         }
//         else if ((n - 1) % 2 == 0)
//         {
//             int t = (n - 1) / 2;
//             if (t >= 1)
//             {
//                 cout << t << endl;
//             }
//         }
//         else
//         {
//             cout << -1 << endl;
//         }
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sec = 0;

        while (true)
        {
            sec++;

            if (n == 1 || n == 3)
            {
                cout << sec << endl;
                break;
            }

            if (n == 2)
            {
                n = 1;
            }
            else if (n > 3)
            {
                n -= 2;
            }
        }
    }
    return 0;
}
