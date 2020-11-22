#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int ans = 0;
    for(int i = a; i <= b; i++){
        if(i >= c && i <= d){
            ans += d - c;
        }
        else{
            ans += d - c + 1;
        }
    }

    cout << ans << endl;
    return 0;
}