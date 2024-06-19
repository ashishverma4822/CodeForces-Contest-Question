#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod (int)1e9 + 7

// code is written by @vashishk0602
void helpMe()
{
    string str;
    cin>>str;
    int h1 = (int)str[0] - '0';
    int h2 = (int)str[1] - '0';
    int hh = h1 * 10 + h2;

    string Meridien;
    if (hh < 12) {
        Meridien = "AM";
    }
    else
        Meridien = "PM";
 
    hh %= 12;
    if (hh == 0) {
        cout << "12";
        for (int i = 2; i < 5; ++i) {
            cout << str[i];
        }
    }
    else {
        if(hh<10) cout << "0"<<to_string(hh);
        else cout<<to_string(hh);
        for (int i = 2; i < 5; ++i) {
            cout << str[i];
        }
    }
    cout << " "<< Meridien << '\n';
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