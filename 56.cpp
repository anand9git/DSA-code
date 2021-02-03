#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	//program to find min no of reversal to form alternating binary string.
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int ans = 0;
	    char ex = '0';
	    for(int i=0;i<s.length();i++){
	        if(s[i]!=ex) ans++;
	        if(ex=='0') ex = '1';
	        else ex = '0';
	    }
	    int ans2 = 0;
	    ex = '1';
	    for(int i=0;i<s.length();i++){
	        if(s[i]!=ex)ans2++;
	        if(ex=='0') ex = '1';
	        else ex = '0';
	    }
	    cout<<min(ans, ans2)<<endl;
	}
	return 0;
}