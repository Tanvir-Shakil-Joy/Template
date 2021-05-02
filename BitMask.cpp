#include <bits/stdc++.h>

using namespace std;

bool solve(int n) {
    int A[20];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for (int mask = 0; mask < (1 << n); mask++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                sum += A[i];
            }
            else sum -= A[i];
        }
        if (sum % 360 == 0) {
            return true;
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    cout << (solve(n) ? "YES" : "NO") << endl;
    return 0;
}