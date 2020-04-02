#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int cycle_length(int n)
{
    vector <int> vec;
    vec.push_back(n);
    while(n != 1) {
        if(n%2 == 0) n /= 2;
        else n = 3*n + 1;
        vec.push_back(n);
    }
    return vec.size();
}

int main()
{
    //FastIO;
    int i, j;
    while(cin >> i >> j) {
        int l = min(i, j), w = max(i, j);
        vector <int> ans;
        for(int k=l; k<=w; k++)
            ans.push_back(cycle_length(k));
        sort(ans.begin(), ans.end(), greater<int>());
        cout << i << " " << j << " " << ans[0] << "\n";
    }

    return 0;
}