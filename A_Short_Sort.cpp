#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod (int)1e9 + 7

// code is written by @vashishk0602
void helpMe()
{
    string t;
    cin>>t;
    int a[3]={0};
    int cnt=0;
    for(int i=0;i<3;i++)
    {
        a[i]='a'-t[i]+i;
        if(a[i]!=0){
            cnt++;
        }
    }
    if(cnt==2 or cnt==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl; 
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