#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
    FastIO;
    char s[10005], q[10005];
    int word = 0;

    while(cin >> s) {
        if(s == "E-N-D") break;
        string ans;
        int count = 0;
        for(int i=0; i<strlen(s); i++) {
            if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z' || s[i] == '-') {
                ans[count] = s[i];
                count ++;
            }
        }
        if(count > word) {
            word = count;
            for(int i=0; i<count; i++)
                q[i] = ans[i];
        }
    }

    for(int i=0; i<word; i++) {
        if(q[i] >= 'A' && q[i] <= 'Z') q[i] = q[i] + 32;
        cout << q[i];
    }
    cout << "\n";

    return 0;
}