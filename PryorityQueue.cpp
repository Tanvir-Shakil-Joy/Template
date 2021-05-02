#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    priority_queue<pair<int, int>>pq;
    for(int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        pq.push(make_pair(a * -1, b));
    }
    pair<int, int> top = pq.top();
    int A = top.second;
    pq.pop();
    int ans = 1;
    for(int i =0; i < n - 1; i++){
        pair<int, int> top = pq.top();
        if(top.first * -1 >= A) {
            A = top.second;
            pq.pop();
            ans++;
        }
        else {
            A = min(A, top.second);
            pq.pop();
        }
    }
    cout << ans << endl;
 
    return 0;
}