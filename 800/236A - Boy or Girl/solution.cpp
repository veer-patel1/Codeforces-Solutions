#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s;
    int count = 0;
    cin >> s;
    for(int i = 0; i < s.length(); i++) {
    bool found = false;
        for(int j = 0; j < i; j++) {
            if(s[i] == s[j]) {
                found = true;
                break;
            }
        }
            if(!found) {
                count++;
            }
        }
    if(count % 2 == 0){
    cout << "CHAT WITH HER!";
}
else{
    cout << "IGNORE HIM!";
}
    return 0;
}