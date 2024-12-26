#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    
    if (isprime (n)== 1){
        cout << "Prime Number" <<endl;
    }
    else {
        cout <<"Not a Prime Number"<<endl;
    }

    return 0;
}
