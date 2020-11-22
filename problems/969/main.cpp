#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;

    const string yes = "Yes";
    const string no = "No";
    string ans = no;

    if(x == 0 || x == 4 || x == 10) ans = yes;

    cout << ans << endl;
    return 0;
}