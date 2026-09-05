#include <iostream>
using namespace std;
 
int main() {
    long long k, n, w;
    cin >> k >> n >> w;
    long long totalCost = k * w * (w + 1) / 2;
    cout << max(0LL, totalCost - n);
    return 0;
}