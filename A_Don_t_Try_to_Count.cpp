#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod (int)1e9 + 7

// code is written by @vashishk0602
bool check(string s, string x)
{
    size_t f = x.find(s);
    if (f != string::npos)
        return true;
    else
        return false;
}
void helpMe()
{
    ll n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    if (n >= m)
    {
        if (check(s, x))
        {
            cout << "0" << endl;
            return;
        }
    }
    ll size = s.size();
    ll cnt = 0;
    while (m*n>x.size())
    {
        bool flag = false;
        x += x;
        if (check(s, x))
        {
            cnt++;
            flag = true;
        }
        else
            cnt++;
        if (flag == true)
        {
            cout << cnt << endl;
            return;
        }
    }
    cout << -1 << endl;
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