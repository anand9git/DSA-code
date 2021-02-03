#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find min reversals to form balanced paranthesis.
    string s;
    cin>>s;
    string st = "";
    if(s.length()%2) {cout<<-1<<endl; return 0;}
    for(int i=0;i<s.length();i++){
        if(st.length()>0){
            if(st[st.length()-1]=='{' && s[i]=='}'){
                st.erase(st.begin() + st.length() - 1);
            }else st += s[i];
        }else st += s[i];
    }
    float n = 0, m = 0;
    for(int i=0;i<st.length();i++){
        if(st[i]=='{')n++;
        else m++;
    }
    cout<<(ceil(n/2) + ceil(m/2))<<endl;
    return 0;
}
