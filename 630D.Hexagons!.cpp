#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, ans;
    cin >> n;
    if(n == 0) ans = 1;
    else
        ans = (n/2.0)*(2*6+(n-1)*6) + 1;
    cout << ans << endl;

    return 0;
}
