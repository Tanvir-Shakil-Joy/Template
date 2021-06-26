# include <bits/stdc++.h>

using namespace std;

typedef long long                                        ll;
typedef long double                                      ld;
typedef pair <int, int>                                  pii;
typedef pair <long long, long long>                      pll;

# define endl                                            '\n'
# define sp                                              ' '
# define all(x)                                          x.begin(), x.end()

const int N = 2e5 + 10;
const int inf = 2e9 + 10;
const long long INF = 2e18 + 10;
const int mod = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n, a, b, c;
    int a1, b1, c1;
    cin >> n >> a >> b >> c;
    vector<int> dp(n + 1);
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        a1 = b1 = c1 = -1;
        if (i >= a) a1 = dp[i - a];
        if (i >= b) b1 = dp[i - b];
        if (i >= c) c1 = dp[i - c];
        if (a1 == -1 && b1 == -1 && c1 == -1) dp[i] = -1;
        else dp[i] = max(max(a1, b1), c1) + 1;
    }
    cout << dp[n] << endl;
    return 0;
}