#include<bits/stdc++.h>
using namespace std ;

int solve (string s, string k ){
    int op =0 ;
    for (int  i = 0; i < s.length (); i++)
    {
        if (s[i]!= k[i]){
            op ++;
        }
    }
    cout << op;
    return op ;
}
int main (){
    

    string m,k ;
    cin >> m >> k ;
   solve (m ,k);
    return 0;
}
