#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod (int)1e9 + 7

// code is written by @vashishk0602

int MAXN = 200010;
vector<int> v(MAXN, 0);

int jod_do(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 1; i < MAXN; ++i) {
        v[i] = jod_do(i) +v[i - 1];
    }

    int testCases;
    cin >> testCases;
    while (testCases--) {
        int n;
        cin >> n;
        cout << v[n] << endl;
    }

    return 0;
}