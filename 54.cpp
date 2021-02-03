#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to count all palindromic subsequence in a string.
    string s;
    cin>>s;
    int n = s.length();
    int arr[n+1][n+1];
    memset(arr, 0, sizeof(arr));
    for(int i=0;i<n;i++)arr[i][i] = 1;
    for(int l=2;l<=n;l++){
        for(int i=0;i<n;i++){
            int k = l + i - 1;
            if(s[i]==s[k]) arr[i][k] = arr[i+1][k] + arr[i][k-1] + 1;
            else arr[i][k] = arr[i+1][k] + arr[i][k-1] - arr[i+1][k-1];
        }
    }
    cout<<arr[0][n-1]<<endl;
    return 0;
}