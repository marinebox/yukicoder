#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> dots(n);
    for(auto &i : dots) cin >> i;

    sort(dots.begin(), dots.end());
    int dotsMax = dots.back() - dots.front();
    int dotsMin = 1e9;
    for(int i = 0; i < n - 1; i++){
        int tmp = dots[i + 1] - dots[i];
        dotsMin = min(dotsMin, tmp);
    }

    cout << dotsMin << endl;
    cout << dotsMax << endl;
    return 0;
}