#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
    int n, m;
    while(cin >> n >> m) {
        if(n == 0 && m == 0) break;
        int l = max(m, n-m), k = min(m, n-m), z = 2;
        long long unsigned sum = 1, sum2 = 1;
        for(int i=0; i<n-l; i++) {
            sum *= (n-i);
            if(sum%z == 0 && z<=k) {
                sum /= z;
                z++;
            }
        }
        for(int i=z; i<=k; i++) sum2 *= i;
        //cout << sum << "   " << sum2 << "  " << l << "  " << k << "\n";
        cout << n << " things taken " << m << " at a time is " << (sum/sum2) << " exactly." << "\n";
    }
    return 0;
}

