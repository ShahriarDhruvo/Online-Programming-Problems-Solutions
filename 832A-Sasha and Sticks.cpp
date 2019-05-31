#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k, mov = 0;
    cin >> n >> k;
    int ans = n/k;
    if(ans % 2 == 0) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}
