#include <iostream>
#include <string>
using namespace std;
 
int main(){
    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        string s;
        cin >> s;
        int answer = 0;
        int cons = 0;
        for(char c : s){
            if(c == '.'){
                answer++;
                cons++;
                if(cons == 3){
                    answer = 2;
                    break;
                }
            }
            if(c == '#'){
                cons = 0;
            }
        }
        cout << answer << "
";
    }
    return 0;
}