#include<bits/stdc++.h>
#define ll long long
#define N ((int)(2e5 + 5))
#define MAX ((int)2e9 + 5)
#define MAXL ((long long)2e18)
#define MOD ((int)(1e9 + 7))
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL);

using namespace std;

ll dpp[2005][2005] ;

ll Capacity[2005] , Value[2005] , n;

ll knapSack(ll idx , ll remCap)
{
    if(remCap < 0) return -MAXL;
    if(dpp[idx][remCap] != -1) return dpp[idx][remCap];
    if(idx > n) return dpp[idx][remCap] = 0;
    ll ans = -MAXL;
    if(remCap >= Capacity[idx]){
        ll tmp = remCap - Capacity[idx];
        ans = Value[idx] + knapSack(idx + 1 , tmp);
    }
    ans = max( ans , knapSack(idx + 1 , remCap) );
    return dpp[idx][remCap] = ans;
}

int main()
{
    ll s; cin >> s >> n;
    for(int i = 1 ; i <= n ; i++) cin >> Capacity[i] >> Value[i];
    memset(dpp, -1, sizeof dpp);
    cout << knapSack(1, s) << endl;

    return 0;
}
