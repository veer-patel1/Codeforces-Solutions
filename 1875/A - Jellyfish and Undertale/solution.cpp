#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i, a, b) for(int (i) = (a); i < (b); i++)
#define vi vector<int>
 
void solve() {
    int a, b, n;
    cin >> a >> b >> n;
    vi v(n, 0);
    rep(i, 0, n) {
        cin >> v[i];
    }
    int sum = 0;
    if(b!=1) sum = b-1;
    rep(i, 0, n) {
        sum += min(v[i], a-1);       
    }
    cout << sum+1 << endl;
}
 
int32_t main() {
	int t;
	cin >> t;
	while(t--) {
	    solve();
	}
    return 0;
}