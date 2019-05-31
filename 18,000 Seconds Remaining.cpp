#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
    FastIO;
    int n, m = 1;
    while(cin >> n) {
        if(n == 0) return 0;
        int sum = 0, a, l = 0, tsum = 0, nl = 0, nn = n;
        printf("Output for data set %d, %d bytes:\n", m, n);
        while(sum < n) {
            cin >> a;
            sum += a;
            tsum += a;
            //cout << n << " " << sum << "\n";
            l++;
            if(l == 5) {
                l = 0;
                int cal = ceil((nn*5)/(float)tsum) - 5;
                if(cal >= 0) printf("   Time remaining: %d seconds\n", cal);
                else printf("   Time remaining: stalled\n");
                nn -= tsum;
                tsum = 0;
            }
            nl++;
        }
        printf("Total time: %d seconds\n\n", nl);

        m++;
    }

    return 0;
}