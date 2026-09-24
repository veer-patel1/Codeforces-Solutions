#include <iostream>
#include <string>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int sum=0;
        int check=k;
        int y = k;
        for(char i : s){
            int x = i -'0';
            if(x==1){
                check=check-1;
            }
            if(x==0){
                check=k;
            }
            y--;
            if(y==0){
                if(check==0){
                    sum+=1;
                    check=k;
                }
                check=k;
                y=k;
            }
        }
        cout << sum << "
";
    }
    return 0;
}