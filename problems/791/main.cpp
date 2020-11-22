#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin >> n;
    int ans = 0;
    if(n.size() == 1){
        ans = -1;
        goto END;
    }
    for(int i = 0; i < n.size(); i++){
        if(i == 0 && n[i] == '1') continue;
        if(n[i] == '3') ans++;
        if(n[i] != '3'){
            ans = -1;
            break;
        }
    }

END:
    cout << ans << endl;
    return 0;
}