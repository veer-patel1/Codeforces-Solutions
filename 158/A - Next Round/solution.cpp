#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n,k;
    cin >> n;
    cin >> k;
    vector<int> arr(n);
    int count=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if((arr[i]>=arr[k-1])&&arr[i]>0){
            count=count+1;
        }
    }
    cout << count;
    return 0;
}