#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    string x, a;
 
    cin >> x;
    for(int i = 0; i < x.length(); i++){
        if(x[i] != '+'){
            a.push_back(x[i]);
        }
    }
 
    sort(a.begin(), a.end());
 
    for(int i = 0; i < a.length(); i++){
        cout << a[i];
        if(i != a.length()-1)
            cout << "+";
    }  
 
    return 0;
}