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
    int n;
    cin >> n;
    vector<int>dpp(n+1, MAX);
    dpp[0] = 0;
    for (int i = 0; i <= n; i++) {
        for (char ch : to_string(i)) dpp[i] = min(dpp[i], dpp[i-(ch-'0')]+1);
    }
    cout << dpp[n] << endl;
    return 0;
}