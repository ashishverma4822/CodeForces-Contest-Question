#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod (int)1e9 + 7

// code is written by @vashishk0602
int count(int x,int y){
    int d=max(abs(5-x),abs(5-y));
    if(d==0) return 5;
    else return 6-d;
}
void helpMe()
{
    char arr[10][10];
    int c[10][10];
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cin>>arr[i][j];
        }
    }
    int ans = 0;
    for(int i=0; i<=9; i++){
        for(int j=0; j<=9; j++){
            if (arr[i][j] == 'X') {
                ans += max(0, 5 - abs(i - 5)) + max(0, 5 - abs(j - 5)) + 1;
            }
        }
    }
    cout<<ans<<endl;
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