#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        if(n%3==0){
            cout << "Second" << "
";
        }
        else{
            cout << "First" << "
";
        }
    }
    return 0;
}