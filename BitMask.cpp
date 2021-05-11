#include<bits/stdc++.h>
#define ll long long
#define N ((int)(2e5 + 5))
#define MAX ((int)2e9 + 5)
#define MAXL ((long long)2e18)
#define MOD ((int)(1e9 + 7))
#define fastio ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);

#include <bits/stdc++.h>

using namespace std;

bool solve(int n) {
    vector<int>A(n);
    for (int& inp : A) cin >> inp;
    for (int mask = 0; mask < (1 << n); mask++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) sum += A[i];
            else sum -= A[i];
        }
        if (sum % 360 == 0) return true;
    }
    return false;
}

int main()
{
    fastio;
    int n; cin >> n;
    cout << (solve(n) ? "YES" : "NO") << endl;
    return 0;
}