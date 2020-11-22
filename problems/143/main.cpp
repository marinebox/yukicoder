#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, n, f;
    cin >> k >> n >> f;
    vector<int> a(f);
    for(auto &i : a) cin >> i;

    int beans = k * n;
    int sum = accumulate(a.begin(), a.end(), 0);
    int ans;
    ans = beans >= sum ? beans - sum : -1;
    cout << ans << endl;
    return 0;
}