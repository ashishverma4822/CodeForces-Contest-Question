#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod (int)1e9 + 7

// code is written by @vashishk0602
void helpMe()
{
    ll n;
    cin>>n;
    vector<ll>v(n-1);
    for(ll i=0;i<n-1;i++){
        cin>>v[i];
    }
    vector<ll>uttar(n);
    uttar[0]=v[0]+1;
    for(ll i=1;i<n;i++){
        uttar[i]=uttar[i-1]+v[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<uttar[i]<<" ";
    }
    cout<<endl;
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