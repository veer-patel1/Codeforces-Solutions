#include <iostream>
using namespace std;
 
int main() {
    int a,b;
    int years=0;
    cin >> a >> b;
    while(a<=b){
        a=a*3;
        b=b*2;
        years=years+1;
    }
    cout << years;
}