#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<double> a(n);
    for(auto &i : a) cin >> i;

    sort(a.begin(), a.end());

    double ans;
    if(n % 2 != 0){
        ans = a[n / 2];
    }
    else{
        ans = (a[n / 2 - 1] + a[n / 2]) / 2;
    }

    cout << ans << endl;
    return 0;
}