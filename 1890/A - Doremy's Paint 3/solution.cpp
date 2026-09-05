#include <iostream>
#include <unordered_map>
using namespace std;
 
int main() {
    int t,n;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[2];
        int i=0;
        unordered_map<int, int> m;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            m[x]++;
        }
        if(m.size()>2){
            cout << "No" << "
";
        }
        else if(m.size() == 2){
            for(auto &[num, freq]: m){
                arr[i]=freq;
                i++;
            }
            if(arr[0]-arr[1]==0 || arr[0]-arr[1]==1 || arr[1]-arr[0]==0 || arr[1]-arr[0]==1){
                cout << "Yes" << "
";
            }
            else{
                cout << "No" << "
";
            }
        }
        else if(m.size() == 1){
                    cout << "Yes" << "
";
        }
        
    }
    return 0;
}