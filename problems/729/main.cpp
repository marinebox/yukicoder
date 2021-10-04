#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int i, j;
    cin >> i >> j;
    swap(s[i], s[j]);
    cout << s << endl;
    return 0;
}