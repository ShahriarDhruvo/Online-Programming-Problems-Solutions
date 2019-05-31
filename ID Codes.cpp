#include <bits/stdc++.h>

using namespace std;

#define FasterIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define newL "\n"
#define mem(a, x) memset(a, x, sizeof(a))

typedef long long ll;

int main()
{
    string in, s = "No Successor";
    while(cin >> in) {
        if (in == "#") break;
        if(next_permutation(in.begin(), in.end())) cout << in << newL;
        else cout << s << newL;
    }

    return 0;
}

