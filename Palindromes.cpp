#include <bits/stdc++.h>

using namespace std;

#define FasterIO ios_base::sync_with_stdio(false)
#define newL "\n"
#define mem(a, x) memset(a, x, sizeof(a))

typedef long long ll;

int main()
{
    FasterIO;
    string s;

    while(cin >> s) {
        int rp = 0, ms = 0, mp = 0;
        string temp, q;
        char r[] = {'B', 'C', 'D', 'F', 'G', 'K', 'N', 'P', 'Q', 'R', '4', '6', '7', '9'};
        q = s;
        temp = s;

        reverse(temp.begin(), temp.end());
        for(int i=0; i<s.length(); i++)
            if(temp[i] == s[i]) rp++;
        if(rp == s.length()) rp = 1;
        else rp = 0;

        for(int i=0; i<s.length(); i++) {
            if(s[i] == 'E') s[i] = '3';
            else if(s[i] == 'J') s[i] = 'L';
            else if(s[i] == 'S') s[i] = '2';
            else if(s[i] == 'Z') s[i] = '5';

            else if(s[i] == '3') s[i] = 'E';
            else if(s[i] == 'L') s[i] = 'J';
            else if(s[i] == '2') s[i] = 'S';
            else if(s[i] == '5') s[i] = 'Z';

            for(int j=0; j<sizeof(r); j++)
                if(s[i] == r[j]) {
                    ms = -1;
                    break;
                }
        }
        temp = s;
        reverse(temp.begin(), temp.end());
        for(int i=0; i<s.length(); i++)
            if(temp[i] == q[i]) ms++;
        if(ms == s.length() && ms != -1) ms = 1;
        else ms = 0;
        if(ms == 1 && rp == 1) mp = 1;

        if(mp == 1) cout << q << " -- is a mirrored palindrome." << newL << newL;
        else if(ms == 1) cout << q << " -- is a mirrored string." << newL << newL;
        else if(rp == 1) cout << q << " -- is a regular palindrome." << newL << newL;
        else cout << q << " -- is not a palindrome." << newL << newL;
    }

    return 0;
}
