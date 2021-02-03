#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find the longest common prefix and suffix (proper) in a string in O(n) time. 
    string s;
    cin>>s;
    int ans = 0;
    int len = s.length();
    for(int i=1;i<=len-1;i++){
        string tmp = s.substr(0, i);
        int pos = s.length() - i;
        string tmp2 = s.substr(pos, i);
        if(tmp==tmp2){
            ans = max(ans, i);
        }
    }
    cout<<ans<<endl;
    return 0;
}