#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int even1 = 0, odd = 0, even2 = 0;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            if(x%2==0){
                if(x%4==0){
                    even2++;
                }
                else{
                    even1++;
                }
            }
            else{
                odd++;
            }
        }
        cout << max(even1,max(odd, even2)) << "
";
    }
    return 0;
}