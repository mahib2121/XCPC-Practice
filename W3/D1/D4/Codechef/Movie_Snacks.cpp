#include<bits/stdc++.h>
using namespace std ;

int main (){
    

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x , y , z ;
    cin >> x>> y >> z ;
    if (x+y > z ){
        int buy = (z*2)+y;
        cout << buy ;
    }
    else {
        cout << (2*x)+(3*y);
    }

    return 0;
}
