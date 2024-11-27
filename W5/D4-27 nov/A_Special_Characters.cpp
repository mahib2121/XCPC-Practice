#include <bits/stdc++.h>
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
        if (n%2==1){
            cout<<"NO"<<endl;
          //  return;
        }
        else{
            cout <<"YES"<<endl;
            for (int i = 0;i<n;i++){
                if (i%2==0){
                    cout <<"BB";

                }
                else {
                    cout << "AA";
                }

            }
            cout <<endl;
        }

    }
    return 0;
}
