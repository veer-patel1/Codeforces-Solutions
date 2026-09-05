#include <iostream>
using namespace std;
 
int main() {
    int x;
    cin >> x;
 
    int moves = x / 5;
 
    if(x % 5 != 0){
        moves++;
    }
 
    cout << moves;
 
    return 0;
}