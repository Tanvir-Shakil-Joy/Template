#include<bits/stdc++.h>
#define ll long long
#define N ((int)(2e5 + 5))
#define MAX ((int)2e9 + 5)
#define MAXL ((long long)2e18)
#define MOD ((int)(1e9 + 7))
#define fastio ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);

using namespace std;

int main()
{
    fastio;
    int n, x; cin >> n >> x;
    vector<int>c(n);
    for (int i = 0; i < n; i++) cin >> c[i];
    vector<ll>dpp(x+1, MAX);
    dpp[0] = 0;
    for (int i = 1; i <= x; i++) {
        for (int j = 0; j < n; j++) {
            if (c[j] > i) continue;
            dpp[i] = min(dpp[i], 1 + dpp[i - c[j]]);
        }
    }
    if (dpp[x] == MAX) cout << -1 << endl;
    else cout << dpp[x] << endl;
    return 0;
}