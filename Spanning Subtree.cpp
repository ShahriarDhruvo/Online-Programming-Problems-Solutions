#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
    FastIO;
    int n, l = 1;
    while(cin >> n) {
        if(n == 0) return 0;
        int count = n/2;
        printf("Case %d: %d\n", l, count);
        l++;
    }

    return 0;
}