#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int n;
    int count=0;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int closest = v[0];
    for (int x : v) {
    if (abs(x) < abs(closest)) {
        closest = x;
        }
    }
    count = abs(closest);
    cout << count << "
";
    return 0;
}