#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b; 
    int l = 1;
    while(cin >> a >> b) {
        if(a == 0 && b == 0) break;
        long long ans = (a*b*(a-1)*(b-1))/4;
        printf("Case %d: ", l);
        cout << ans << "\n";
        l++;
    }
    return 0;
}