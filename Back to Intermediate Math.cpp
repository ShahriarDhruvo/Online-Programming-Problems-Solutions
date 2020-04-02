#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
    //FastIO;
    int n, l = 1;
    cin >> n;
    while(n--) {
        float d, v, u;
        cin >> d >> v >> u;
        if(v < u && u != 0 && v != 0) {
            float sp = d/sqrt(u*u - v*v), st = d/u;
            printf("Case %d: %0.3f\n", l, abs(sp-st));
        }
        else printf("Case %d: can't determine\n", l);
        l++;
    }

    return 0;
}