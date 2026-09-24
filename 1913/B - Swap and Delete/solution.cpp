#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
        int zero = 0, one = 0;
 
        for (char c : s) {
            if (c == '0')
                zero++;
            else
                one++;
        }
 
        int i = 0;
        while (i < s.size()) {
            if (s[i] == '0' && one > 0) {
                one--;
            }
            else if (s[i] == '1' && zero > 0) {
                zero--;
            }
            else {
                break;
            }
 
            i++;
        }
 
        cout << s.size() - i << '
';
    }
    return 0;
}