#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool iscommon(vector<string> sv, int len){
    string check = sv[0].substr(0, len);
    for(int i=1;i<(int)sv.size();i++){
        if(sv[i].find(check)!=0)return false;
    }
    return true;
}

int main(){
    //program to find longest common prefix in a vector of strings.
    int n;
    cin>>n;
    vector<string> sv;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        sv.push_back(s);
    }

    if(n==0){
        cout<<""<<endl;
        return 0;
    }

    int hi = sv[0].length();
    int low = 0;
    for(int i=1;i<sv.size();i++){
        hi = min(hi, (int)sv[i].length());
    }
    while(low<=hi){
        int mid = (low + hi)/2;
        if(iscommon(sv, mid))low = mid + 1;
        else hi = mid - 1;
    }
    cout<<sv[0].substr(0, (low+hi)/2)<<endl;
    return 0;
}
