#include <iostream>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while (t--){
        long long x, y, k;
        cin >> x >> y >> k;
        long long answer = 0;
        long long i = 0;
        while (i < k && x + i <= y - x){
            answer += (y + i)%(x + i);
            i++;
        }
        answer += (k - i) * (y - x);
        cout << answer << "
";
    }
    return 0;
}