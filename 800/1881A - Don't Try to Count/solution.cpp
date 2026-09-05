#include <iostream>
using namespace std;
 
int main() {
    int t,n,m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        string x,s;
        cin >> x >> s;
        for(int i=0;i<=5;i++){
            if(x.contains(s)){
                cout << i <<"
";
                break;
            }
            else{
                x.append(x);
            }
        }
        if(!x.contains(s)){
            cout << "-1" << "
";
        }
    }
    return 0;
}