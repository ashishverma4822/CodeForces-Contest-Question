#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod (int)1e9 + 7

// code is written by @vashishk0602
void helpme_bhai(int n, int i){
    if(n==0){
        cout<<"YES"<<endl;
        return;
    }
    while(i<n){
        if(n%i==0){
            helpme_bhai(n/i,i);
        }
        else{
            if(i%2==0) i+=1;
            else i*=10;
        }
    }
    cout<<"NO"<<endl;
}
void helpMe()
{ 
    int n;
    cin>>n;
    helpme_bhai(n,10);
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