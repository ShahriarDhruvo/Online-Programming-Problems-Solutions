#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int t;
	cin >> t;
	while(t--){
		long long n, k, ans = 0, count = 0;
		cin >> n >> k;

		while(n != 0){
			//cout << n << " " << ans << " " << count << "\n";
			ans += n%k;
			n -= n%k;
			if(n != 0){
				n /= k;
				count++;
			}
		}

		cout << ans+count << "\n";
	}

	return 0;
}