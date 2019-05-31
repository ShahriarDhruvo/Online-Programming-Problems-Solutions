#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
    FastIO;
    string s;
    while(cin >> s) {
        if (s == "END") return 0;
        int i = 1000000000, x, count = 2;
        stringstream to_int(s);
        to_int >> x;
        int y = x;
        if(x >= 10) {
            while(i >= 10) {
                i = 1;
                while(x >= 10) {
                    x /= 10;
                    i++;
                }
                count++;
            }
        }
        if(y == 1) count = 1;
        cout << count << "\n";
    }

    return 0;
}