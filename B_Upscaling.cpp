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
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                if(j%2==0){
                    cout<<"##";
                }
                if(j%2){
                    cout<<"..";
                }
            }
            cout<<endl;
            for(int j=0;j<n;j++){
                if(j%2==0){
                    cout<<"##";
                }
                if(j%2){
                    cout<<"..";
                }
            }
            cout<<endl;
        }
        if(i%2){
            for(int j=0;j<n;j++){
                if(j%2==0){
                    cout<<"..";
                }
                if(j%2){
                    cout<<"##";
                }
            }
            cout<<endl;
            for(int j=0;j<n;j++){
                if(j%2==0){
                    cout<<"..";
                }
                if(j%2){
                    cout<<"##";
                }
            }
            cout<<endl;
        }
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