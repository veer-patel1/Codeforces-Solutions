#include <iostream>
using namespace std;
 
int main() {
    
    int n;
    cin >> n;
 
    int check = 0;
 
    for(int i = 0; i < n; i++) {
 
        int a, b, c;
        cin >> a >> b >> c;
 
        if(a + b + c >= 2) {
            check++;
        }
    }
 
    cout << check;
 
    return 0;
}