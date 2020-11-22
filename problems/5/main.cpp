#include <bits/stdc++.h>
using namespace std;

int main(){
    int l, n;
    cin >> l >> n;
    vector<int> w(n);
    for(auto &i : w) cin >> i;

    sort(w.begin(), w.end());
    
    int ans = 0;
    int length = 0;
    for(int i = 0; i < n; i++){
        length += w[i];
        if(length > l){
            break;
        }
        else{
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}