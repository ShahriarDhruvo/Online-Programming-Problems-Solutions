#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
    FastIO;
    int n, m, l = 1;
    cin >> n;
    while(n--) {
        cin >> m;
        long long ans = m*(m-1);
        if(ans % 4 == 0) printf("Case %d: %lld\n", l, ans/4);
        else printf("Case %d: %lld/2\n", l, ans);
        l++;
    }

    return 0;
}