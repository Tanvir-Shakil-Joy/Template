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
    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    for (int& inp : c) cin >> inp;
    vector<vector<int>> dpp(n + 1, vector<int>(x + 1, 0));
    dpp[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= x; j++) {
            dpp[i][j] = dpp[i - 1][j];
            if (j < c[i - 1]) continue;
            (dpp[i][j] += dpp[i][j - c[i - 1]]) %= MOD;
        }
    }
    cout << dpp[n][x] << endl;
    return 0;
}