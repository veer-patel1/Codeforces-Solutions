#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int zero = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == 0) {
                zero++;
            }
        }
        if (n == 2) {
            if (zero == 2) {
                cout << 0 << '
';
            } else {
                cout << -1 << '
';
            }
        }
        else {
            if (v[0] == 0 && v[n - 1] == 0) {
                cout << 0 << '
';
            }
            else if (v[0] == 1 && v[n - 1] == 0) {
                if (zero >= 2) {
                    cout << 1 << '
';
                } else {
                    cout << -1 << '
';
                }
            }
            else if (v[0] == 0 && v[n - 1] == 1) {
                if (zero >= 2) {
                    cout << 1 << '
';
                } else {
                    cout << -1 << '
';
                }
            }
            else{
                if (zero >= 2) {
                    cout << 2 << '
';
                } else {
                    cout << -1 << '
';
                }
            }
        }
    }
    return 0;
}