#include<bits/stdc++.h>
using namespace std ;

int main (){
    

    int t ;
    cin >> t ;
    while (t--)
    {
        int k = 100;
        int dvr = 10 ;
        int i ;
        cin >> i ;
        int retn = k -i ;
        int maxretn = (retn / dvr) * dvr;
        cout << maxretn  <<endl ; ;
    }
    return 0;
}
