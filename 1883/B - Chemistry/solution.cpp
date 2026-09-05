#include <iostream>
#include <string>
#include <map>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n,k,odd=0;
        string s;
        map<char,int> m;
        cin >> n >> k;
        cin >> s;
        for(auto c : s){
            m[c]++;
        }
        for(auto &[let, freq] : m){
            if(freq % 2 != 0){
                odd+=1;
            }
        }
        if(odd-1 <= k){
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