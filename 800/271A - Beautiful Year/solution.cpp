#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    bool distinct = false;
    int y;
    cin >> y;
    while(distinct!=true){
        y=y+1;
        int temp;
        int yc=y;
        vector<int> v;
        v.clear();
        while(yc>0){
            v.push_back(yc%10);
            yc=yc/10;
        }
        distinct = true;
        for(int i=0;i<4;i++){
            for(int j=i+1;j<4;j++){
                if(v[i]==v[j]){
                    distinct = false;
                }
            }
        }
    }
    if(distinct == true){
        cout << y;
    }
    return 0;
}