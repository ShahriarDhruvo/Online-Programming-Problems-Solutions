#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, total = 0;
    string s;
    scanf("%d", &n);
    while(n--) {
        cin >> s;
        if(s[0] == 'd') {
            int l;
            cin >> l;
            total += l;
        }
        if(s[0] == 'r')
            cout << total << endl;
    }

    return 0;
}