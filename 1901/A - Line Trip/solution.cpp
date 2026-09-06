#include <iostream>
#include <algorithm>
 
using namespace std;
int main(){
    int t,n,x;
    cin >> t;
    for(int i = 0;i<t;i++){
        cin >> n;
        cin >> x;
        int arr[n+2];
        for(int y = 0; y<n+2 ; y++){
            if(y==0){
                arr[0]=0;
            }
            else if(y==n+1){
                arr[n+1]=x;
            }
            else{
            cin >> arr[y];
            }
        }
        int diff_arr[n+1];
        for(int i=0;i<n+1;i++){
            if(i==n){
                diff_arr[i] = 2*(arr[n+1]-arr[n]);
            }
            else{
                diff_arr[i]=arr[i+1]-arr[i];
            }
        }
        int answer = *max_element(diff_arr, diff_arr + (n+1));
        cout << answer << "
";
    }
}