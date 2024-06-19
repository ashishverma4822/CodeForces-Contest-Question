#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod (int)1e9 + 7

// code is written by @vashishk0602
int lcs(int n, int m,string s, string t) 
{ 
    if (n>=s.size() || m>=t.size()) return 0; 
    if (s[n] == t[m]) 
        return 1 + lcs(n+1,m+1,s,t); 
    else
        return lcs(n,m+1,s,t); 
} 
int lcs_dp(string s, string t){
    vector<vector<int>>dp(s.size()+1,vector<int>(t.size()+1));
    for(int i=0;i<t.size();i++) dp[s.size()][i]=0;
    for(int i=0;i<s.size();i++) dp[i][t.size()]=0;
    for(int i=s.size()-1;i>=0;i--){
        for(int j=t.size()-1;j>=0;j--){
            if (s[i] == t[j]) dp[i][j] =  1 + dp[i+1][j+1]; 
            else dp[i][j] = dp[i][j+1];
        }
    }
    return dp[0][0];
}
ll sol(int n, int m , string s, string t){
    ll l=0,k=0;
    for(ll i=0;i<n;i++){
        while(l<m and t[l]!=s[i]) l++;
        if(l==m) break;
        else{
            k++;
            l+=1;
        }
    }
    return k;
}
void helpMe()
{
    ll n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    string t;
    cin>>t;
    cout<<sol(n,m,s,t)<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    bool testcase = true;
    ll test;
    if (testcase)
    {
        cin >> test;
        while (test--)
        {
            helpMe();
        }
    }
    else
    {
        helpMe();
    }
    return 0;
}