#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if (n == 1) {
            cout << 1 << endl;
        }
        else if (n == 2) {
            cout << -1 << endl;
        }
        else {
            vector<long long> a = {1, 2, 3};
            long long sum = 6;
 
            while (a.size() < n) {
                a.push_back(sum);
                sum *= 2;
                }
            for (long long x : a) {
                cout << x << " ";
                }
            cout << endl;
            }
        }
    return 0;
}