#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> level(6, 0);
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        tmp--;
        level[tmp]++;
    }
    int ans = 0;
    int vote = 0;
    for(int i = 0; i < 6; i++){
        if(vote <= level[i]){
            ans = i;
            vote = level[i];
        }
    }

    ans++;
    cout << ans << endl;
    return 0;
}