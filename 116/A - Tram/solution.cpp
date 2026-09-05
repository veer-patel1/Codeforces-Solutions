#include <iostream>
using namespace std;
 
int main() {
    int n, a, b, cur = 0, ans = 0;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        cur += b - a;
        ans = max(ans, cur);
    }
    cout << ans;
}