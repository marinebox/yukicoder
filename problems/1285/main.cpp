#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;

    sort(a.begin(), a.end());
    int previous;
    int present;
    int ans = 2;
    for(int i = 1; i < n; i++){
        previous = a[i - 1];
        present = a[i];
        if(previous % 2 == present % 2) continue;
        if(previous + 1 < present){
            ans = 1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}