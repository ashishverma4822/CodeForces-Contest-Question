#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod (int)1e9 + 7

// code is written by @vashishk0602

vector<int> hello() {
    string input;
    getline(cin, input);
    istringstream iss(input);
    vector<int> result;
    int temp;
    while (iss >> temp) {
        result.push_back(temp);
    }
    return result;
}

int main() {
    std::vector<int> input = hello();
    int test_cases = input[0];

    for (int t = 0; t < test_cases; ++t) {
        vector<std::string> M;
        int n = hello()[0];
        set<int> s;

        for (int i = 0; i < n; ++i) {
            string ss;
            getline(cin, ss);
            if (ss.find('1') != string::npos) {
                s.insert(count(ss.begin(), ss.end(), '1'));
            }
        }

        if (s.size() == 1) {
            cout << "SQUARE" << endl;
        } else {
            cout << "TRIANGLE" <<endl;
        }
    }

    return 0;
}
