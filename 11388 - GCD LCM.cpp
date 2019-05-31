#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int gcd(int a, int b)
{
    if(a == 0) return b;
    int g = gcd(b%a, a);
    return g;
}

int main()
{
    //FastIO;
    long long g, l, n;
    cin >> n;
    while(n--) {
        cin >> g >> l;
        long long n = 1, a = 0, b = 0, k = 0;
        if(g == l) {
            cout << g << " " << l << "\n";
            continue;
        }
        while(true) {
            a = g*n;
            b = (g*l)/a;
            if(a >= b) {
                cout << "-1" << "\n";
                k = 1;
                break;
            }
            if(((a*b)/gcd(a, b)) == l) break;
            n++;
        }
        if(k == 1) continue;
        cout << a << " " << b << "\n";
    }

    return 0;
}