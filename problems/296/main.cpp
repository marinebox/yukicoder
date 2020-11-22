#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, h, m, t;
    cin >> n >> h >> m >> t;
    
    int minute = 60 * h + m;
    minute += (n - 1) * t;

    int hour = minute / 60;
    hour %= 24;
    minute %= 60;

    cout << hour << endl;
    cout << minute << endl;
    return 0;
}