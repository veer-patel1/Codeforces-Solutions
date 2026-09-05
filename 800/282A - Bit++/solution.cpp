#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int n;
    string s;
    cin >> n;
    int m=0;
    for(int i=0;i<n;i++){
        cin >> s;
        if((s=="X++") || (s=="++X")){
            m=m+1;
        }
        else if((s=="X--") || (s=="--X")){
            m=m-1;
        }
    }
    cout << m;
 
    return 0;
}