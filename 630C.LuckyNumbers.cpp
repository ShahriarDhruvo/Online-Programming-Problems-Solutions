#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long arr[n+1];

    for (int i=1; i<=n; i++)
        arr[i] = pow(2, i);
    long long ans = 0;
    for (int i=1; i<=n; i++)
        ans += arr[i];
    cout << ans << endl;

    return 0;
}
