#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(auto &i : a) cin >> i;
    for(auto &i : b) cin >> i;

    unordered_map<int, int> ans;
    vector<int> numbers(n);
    for(int i = 0; i < n; i++) numbers[i] = i;
    int score = 0;
    do{
        int ts = 0;
        for(int i = 0; i < n; i++){
            int n = numbers[i];
            ts += max(0, a[n] - b[i]);
        }
        ans[ts]++;
        score = max(score, ts);
    } while(next_permutation(numbers.begin(), numbers.end()));

    cout << ans[score] << endl;
    return 0;
}