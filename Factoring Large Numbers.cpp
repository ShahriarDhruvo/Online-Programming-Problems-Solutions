#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

void isFact(long long n, vector <long long> &ans)
{
    for(long long i=2; i*i<=n; i++) {
        while(n%i == 0) {
            ans.push_back(i);
            n /= i;
        }
    }
    ans.push_back(n);
}

int main()
{
    FastIO;
    long long n;
    while(cin >> n) {
        if(n < 0) return 0;
        vector <long long> ans;
        isFact(n, ans);
        for(int i=0; i<ans.size(); i++) 
             cout << "    " << ans[i] << "\n";
        cout << "\n";
    }

    return 0;
}