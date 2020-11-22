#include <bits/stdc++.h>
using namespace std;

int main(){
    long long d, p;
    cin >> d >> p;

    int ans = d;
    int tmp = d * p / 100;
    ans += tmp;

    cout << ans << endl;
    return 0;
}