#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solution(int n, int k, vector<int> v){
    int ans = k; 
    int even = 0;
    for(int i = 0; i < n; i++){
        if(v[i] % 2 == 0) {
            even++;
        }
        if(v[i] % k == 0){
            ans = 0;
            break; 
        }
        int ops = k - (v[i] % k);
        if(ops < ans){
            ans = ops;
        }
    }
    if (k == 4) {
        if (even >= 2) {
            ans = min(ans, 0);
        } else if (even == 1) {
            ans = min(ans, 1);
        } else {
            ans = min(ans, 2);
        }
    }
    cout << ans << "
";
}
 
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        solution(n,k,v);
    }
}