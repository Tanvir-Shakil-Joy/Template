#include<bits/stdc++.h>
#define ll long long
#define N ((int)(2e5 + 5))
#define MAX ((int)2e9 + 5)
#define MAXL ((long long)2e18)
#define MOD ((int)(1e9 + 7))
#define fastio ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);

using namespace std;

bool solve() {
    int n; cin >> n;
    vector<int>A(n);
    int sum = 0;
    int cnt1 = 0, cnt2 = 0;
    for (int& i : A) {
        cin >> i;
        sum += i;
    }
    if (sum & 1) return false;
    else {
        int tot = sum / 2;
        vector<bool>dpp(tot + 1, false);
        dpp[0] = true;
        for (int j = 1; j <= n; j++) {
            for (int i = tot; i >= 1; i--) {
                if ((i >= A[j - 1]) && dpp[i - A[j - 1]]) dpp[i] = true;
            }
        }
        return dpp[tot];
    }
}

int main()
{
    fastio;
    int t; cin >> t;
    while (t--) cout << (solve() ? "YES" : "NO") << endl;
    return 0;
}