#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    string v[10] = {
        "1111111111",
        "1222222221",
        "1233333321",
        "1234444321",
        "1234554321",
        "1234554321",
        "1234444321",
        "1233333321",
        "1222222221",
        "1111111111"
    };
    while (t--) {
        int sum = 0;
        for (int r = 0; r < 10; r++) {
            string s;
            cin >> s;
            for (int c = 0; c < 10; c++) {
                if (s[c] == 'X') {
                    sum += v[r][c] - '0';
                }
            }
        }
        cout << sum << '
';
    }
    return 0;
}