#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod (int)1e9 + 7

// code is written by @vashishk0602
void helpMe()
{
    int n;
    cin>>n;
    int max_val = 1;
    int uttar = 0;
    for(int i=1;i<n;i++){
        if(max_val<(__gcd(n,i)+i)){
            uttar=i;
            max_val = __gcd(n,i)+i;
        }
    }
    cout<<uttar<<endl;
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