#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

long long arr[1000001], ans[1000001];

void precal()
{
    long long count = 0;
    for(int i=4; i<=1000000; i++) {
        if(i%2 == 0) {
            count++;
            arr[i] = arr[i-1] + count;
            ans[i] = ans[i-1] + arr[i];
        }
        else {
            arr[i] = arr[i-1] + count;
            ans[i] = ans[i-1] + arr[i];   
        } 
    }
}

int main()
{
    FastIO;
    long long n;
    precal();
    while(cin >> n) {
        if(n < 3) return 0;
        cout << ans[n] << "\n";
    }

    return 0;
}