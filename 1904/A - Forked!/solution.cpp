#include <iostream>
#include <vector>
#include <set>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, x1, y1, x2, y2;
        cin >> a >> b >> x1 >> y1 >> x2 >> y2;
        vector<pair<int,int>> moves = {
            {a,b}, {a,-b}, {-a,b}, {-a,-b},
            {b,a}, {b,-a}, {-b,a}, {-b,-a}
        };
        set<pair<int,int>> s1, s2;
        for (auto [dx, dy] : moves) {
            s1.insert({x1 + dx, y1 + dy});
            s2.insert({x2 + dx, y2 + dy});
        }
        int ans = 0;
        for (auto p : s1) {
            if (s2.count(p))
                ans++;
        }
        cout << ans << '
';
    }
    return 0;
}