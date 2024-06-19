#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod (int)1e9 + 7

// code is written by @vashishk0602
bool check(string s, ll i, ll j){
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}
void helpMe()
{
    string t;
    cin>>t;
    ll i=0;
    ll uttar=t.size();
    ll size=t.size();
    bool flag=false;
    while(i<size){
        flag=false;
        for(ll j=i+1;j<=size;j=j+2){
            if(check(t,i,j)){
                uttar=uttar-(j-i+1)/2;
                i+=(j-i+1)/2;
                flag=true;
                break;
            }
        }
        if(flag==false) i++;
    }
    cout<<uttar<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    bool testcase = false;
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