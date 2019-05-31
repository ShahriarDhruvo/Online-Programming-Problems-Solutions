#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

typedef long long ll;

int main()
{
    FastIO;
    int n, i;
    while(cin >> n && n != 0) {
        for(i=0; (1<<i)<n; i++);
        cout << (n<<1)-(1<<i) << "\n";
    }

    return 0;
}