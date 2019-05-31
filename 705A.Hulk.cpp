#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string love = "I love ", hate = "I hate ", mid = "that ", last = "it", ans;
    cin >> n;
    int k=0;
    for(int i=0; i<n; i++) {
        if(k == 0) {
            ans += hate;
            ans += mid;
            k = 1;
        }
        else {
            ans += love;
            ans += mid;
            k = 0;
        }
    }
    ans.erase(ans.end()-5, ans.end());
    ans += last;
    cout << ans << endl;

    return 0;
}
