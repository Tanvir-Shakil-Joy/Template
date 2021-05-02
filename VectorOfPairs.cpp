#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, x; cin >> n >> x;
    vector< pair <int,int> > vect;
    for(int i = 1; i <= n; i++) {
        int inp; cin >> inp;
        vect.push_back( make_pair(inp, i) );
    }
    sort(vect.begin(), vect.end());
    bool check = true;
    int i = 0, j = n - 1;
    while(i < j) {
        if(vect[i].first + vect[j].first == x) {
            cout << vect[i].second << " " << vect[j].second << endl;
            check = false;
            break;
        }
        else if(vect[i].first + vect[j].first < x) i++;
        else j--;
    }
    if(check) cout << -1 << endl;
 
    return 0;
}