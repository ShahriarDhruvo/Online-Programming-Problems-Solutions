#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long m, n, total = 0;
    cin >> m >> n;
    long long waC[n];
    for (int i=0; i<n; i++) {
        cin >> waC[i];
        total += waC[i];
    }
    sort(waC, waC+n);
    total -= m;
    long long angry = 0, ans = 0;
    for (int i=0; i<n; i++) {
        angry = min (waC[i], total/(n-i));
        ans += angry*angry;
        total -= angry; 
    }
    cout << ans << endl;

    return 0;
}