// ICPC Contest Pr-2 :B. Boring Chess
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r1, c1, k, i;
    cin >> k;
    for(i=1; i<=k; i++) {
        cin >> r1;
        cin >> c1;
        int count = 0;
        if((c1 + 2) <= 8) {
            if((r1 + 1) <= 8) count++;
            if((r1 - 1) > 0) count++;
        }
        if((c1 + 1) <= 8) {
            if((r1 + 2) <= 8) count++;
            if((r1 - 2) > 0) count++;
        }
        if((c1 - 2) <= 8 && (c1 - 2) > 0) {
            if((r1 + 1) <= 8) count++;
            if((r1 - 1) > 0) count++;
        }
        if((c1 - 1) <= 8 && (c1 - 1) > 0) {
            if((r1 + 2) <= 8) count++;
            if((r1 - 2) > 0) count++;
        }
        printf("Case %d: ", i);
        cout << count << endl;
    }
}
