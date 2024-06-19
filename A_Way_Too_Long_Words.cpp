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
    int n=s.size();
    if(n<=10){
        cout<<s<<endl;
        return;
    }
    else{
        cout<<s[0]<<n-2<<s[n-1]<<endl;
        return;
    }
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