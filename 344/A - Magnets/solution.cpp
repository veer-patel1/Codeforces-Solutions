#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, ans = 0;
    string prev, cur;
    cin >> n;
 
    for (int i = 0; i < n; ++i) {
        cin >> cur;
        if (i == 0 || cur != prev) ++ans;
        prev = cur;
    }
 
    cout << ans << '
';
    return 0;
}