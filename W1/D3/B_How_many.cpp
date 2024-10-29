#include<bits/stdc++.h>
using namespace std;
int main (){
     int s,t;
     cin>>s>>t; 
    int cont = 0;
    for(int i = 0 ; i<=s ; i++){

        for(int j = 0 ;i+j<=s ; j++){

            for(int k = 0 ; i+j+k<=s ; k++){
                
                if(i*j*k <= t) cont++;
            }
        }
    }
    cout<<cont;
    return 0;
}