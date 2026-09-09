#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int ans = 0;
    while (n--) {
        int p, q;
        cin >> p >> q;
        if (q - p >= 2)
            ans++;
    }
    cout << ans << '
';
    return 0;
}