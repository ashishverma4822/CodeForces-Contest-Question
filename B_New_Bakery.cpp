#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod (int)1e9 + 7

// code is written by @vashishk0602
void helpMe()
{
    long long n, a, b;
        cin>>n>>a>>b;
        long long fyada = 0;
        fyada=n*a;
        long long k = min(n, b);
        long long paisa= k * b - k * (k - 1) / 2 + (n - k) * a;
        fyada = max(fyada, paisa);
        long long critical_k= b - a + 1;
        if (critical_k > 0 && critical_k <= min(n, b)) {
            paisa = critical_k * b - critical_k * (critical_k - 1) / 2 + (n - critical_k) * a;
            fyada = max(fyada, paisa);
        }
        cout << fyada << endl;
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