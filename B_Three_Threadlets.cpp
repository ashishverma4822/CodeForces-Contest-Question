#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod (int)1e9 + 7

// code is written by @vashishk0602
void helpMe()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll mini = min({a, b, c});
    if (a % mini != 0 or b % mini != 0 or c % mini != 0)
    {
        cout << "NO" << endl;
        return;
    }
    // cout << mini << endl;
    ll counter = 0;
    while (a != mini)
    {
        if (counter > 3)
        {
            cout << "NO" << endl;
            return;
        }
        a -= mini;
        counter++;
    }
    // cout << counter << endl;
    while (b != mini)
    {
        if (counter > 3)
        {
            cout << "NO" << endl;
            return;
        }
        b -= mini;
        counter++;
    }
    // cout << counter << endl;
    while (c != mini)
    {
        if (counter > 3)
        {
            cout << "NO" << endl;
            return;
        }
        c -= mini;
        counter++;
    }
    if (counter > 3)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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