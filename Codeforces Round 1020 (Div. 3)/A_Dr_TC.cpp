
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >>
            n;
        string s;
        cin >> s;

        int count1 = 0;

        for (char c : s)
        {
            if (c == '1')
            {
                count1++;
            }
        }

        int res = (n - count1) + (count1 * (n - 1));
        cout << res << endl;
    }
    return 0;
}
