#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod (int)1e9 + 7

// code is written by @vashishk0602
void helpMe()
{
    ll n,m;
    cin>>n>>m;
    vector<vector<int>>v(n);
    for(int i=0;i<n;i++){
        int t1,t2;
        cin>>t1>>t2;
        v[i] = {t1,t2};
    }
    vector<vector<int>>q;
    for(int i=0;i<m;i++){
        int k;
        cin>>k;
        vector<int>c(k);
        for(int j=0;j<k;j++){
            cin>>c[i];
        }
    }
    for()
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