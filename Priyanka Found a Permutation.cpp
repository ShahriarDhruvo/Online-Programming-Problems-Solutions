#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()

{
    FastIO;
    string s = "qewrtyupsidfghjklzxcavbnmo";
    int pos=-1, l=-1, r=-1;
    char c;
    cin >> c;
    if(c == 'q') {
        cout << 'e' << endl;
        return 0;
    }
    for(int i=0; i<s.length(); i++) {
        if(s[i] == c) {
            pos = i;
            break;
        } 
    }
    
    for(int i=pos-1; i>=0; i--) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            l = i;
            break;
        } 
    }

    for(int i=pos+1; i<s.length(); i++) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            r = i;
            break;
        } 
    }

    int ans = min(abs(pos-l), abs(r-pos));
    if(ans == pos-l) cout << s[l] << "\n"; 
    else cout << s[r] << "\n";

    return 0;
}