#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    map<int, int> alphabetA, alphabetB;
    for(auto c : a){
        int tmp = c - 'a';
        alphabetA[tmp]++;
    }
    for(auto c : b){
        int tmp = c - 'a';
        alphabetB[tmp]++;
    }

    const string yes = "YES";
    const string no = "NO";
    string ans = yes;
    for(int i = 0; i < 26; i++){
        if(alphabetA[i] != alphabetB[i]) ans = no;
    }

    cout << ans << endl;
    return 0;
}