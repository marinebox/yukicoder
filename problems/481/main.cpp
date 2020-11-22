#include <bits/stdc++.h>
using namespace std;

int main(){
    int ans;
    for(int i = 1; i <= 10; i++){
        int tmp;
        cin >> tmp;
        if(i != tmp){
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}