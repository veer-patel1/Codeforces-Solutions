#include <iostream>
using namespace std;
 
int main() {
    int x;
    int rows,cols;
    for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            cin >> x;
            if(x==1){
                rows = i;
                cols = j;
            }
        }
    }
    cout << abs(rows - 3) + abs(cols - 3);
    return 0;
}