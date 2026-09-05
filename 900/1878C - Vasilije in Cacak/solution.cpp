#include <iostream>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,k,x;
        cin >> n >> k >> x;
        long long min_sum = (k * (k + 1)) / 2;
        long long max_sum = (k * (2 * n - k + 1)) / 2;
        if(k<=n && x>=min_sum && x<= max_sum){
            cout << "YES
";
        }
        else{
            cout << "NO
";
        }
    }
    return 0;
}