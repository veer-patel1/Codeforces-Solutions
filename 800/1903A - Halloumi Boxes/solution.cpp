#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main(){
    int t,k,n;
    cin >> t;
    for(int i=0;i<t; i++){
        cin >> n;
        cin >> k;
        int arr[n];
        for(int j=0;j<n;j++){
            cin >> arr[j];
        }
        if(k == 1){
            if(is_sorted(arr, arr+n)){
                cout << "YES
";
            }
            else{
            cout << "NO
";
            }
        }
        else if(k>=2){
            cout << "YES
";
        }
        else{
            cout << "NO
";
        }
    }
}