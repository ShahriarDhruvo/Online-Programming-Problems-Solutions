#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
    //FastIO;
    int n, m, l, count = 0;
    cin >> n >> m;
    while(n < m) {
        if(m%2) m++;
        else m /= 2;
        count++;
    }
    count = count + n - m;
    cout << count << "\n";

    return 0;
}

