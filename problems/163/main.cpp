#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    for(auto &c : s){
        if(c >='A' && c <= 'Z')
            c += 32;
        else
            c -= 32;
    }

    cout << s << endl;
    return 0;
}