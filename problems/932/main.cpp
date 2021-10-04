#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    string ans = "Done!";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A') i++;
        else if(s[i] == ',') continue;
        else{
            ans = "Failed...";
            break;
        }
    }

    cout << ans << endl;
    return 0;
}