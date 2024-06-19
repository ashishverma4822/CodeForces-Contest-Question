#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod (int)1e9 + 7

// code is written by @vashishk0602
void helpMe()
{
    int a,b,k,d;
    cin>>a>>b>>k>>d;
    unordered_map<int,bool>mp1,mp2;
    for(int i=min(a,b)+1;i<max(a,b);i++){
        mp1[i]=true;
    }
    int c;
    if(max(a,b)==12) c = 13; 
    else c =max(a,b);
    for(int i=c;i<min(a,b)+12;i++){
        if((i+12)%12==0) mp2[12]=true;
        else mp2[(i+12)%12] = true;
    }
    if(mp1.find(k)!=mp1.end() and mp1.find(d)!=mp1.end()) cout<<"NO"<<endl;
    else if(mp2.find(k)!=mp2.end() and mp2.find(d)!=mp2.end()) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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