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
    if(s.size()==1){
        cout<<"NO"<<endl;
        return;
    }
    bool flag = false;
    for(int i=1;i<s.size();i++){
        if(s[i-1]!=s[i]){
            cout<<"YES"<<endl;
            string t=s;
            swap(t[i-1],t[i]);
            cout<<t<<endl;
            flag = true;
            return;
        }
    }
    if(!flag){
        cout<<"NO"<<endl;
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