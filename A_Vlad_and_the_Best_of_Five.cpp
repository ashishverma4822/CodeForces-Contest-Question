#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod (int)1e9 + 7

// code is written by @vashishk0602
void helpMe()
{
    string s;
    cin>>s;
    unordered_map<char,int>mp;
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    int k1=0,k2=0;
    if(mp.find('A')!=mp.end()) k1=mp['A'];
    if(mp.find('B')!=mp.end()) k2=mp['B'];
    if(k1>k2) cout<<"A"<<endl;
    else cout<<"B"<<endl;
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