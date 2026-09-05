#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if (arr[0] == 1)
            cout << "YES
";
        else
            cout << "NO
";
    }
    return 0;
}