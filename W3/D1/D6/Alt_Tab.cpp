#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin>>n;
	vector<string> v(n) ;
	string ans="";
	for(int i=0;i<n;i++)
	    cin>>v[i];
	    map<string,int>mp;
	    for(int i=v.size()-1;i>=0;i--){
	        string str=v[i];
	        if(mp.find(str)!=mp.end()) 
            continue;
	        else {
	            ans += str[str.size()-2];
	            ans += str[str.size()-1];
	            mp[str]++;
	        }
	    }
	    cout<<ans<<endl;
	return 0;
}   