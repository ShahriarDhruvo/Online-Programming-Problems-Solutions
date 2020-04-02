#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	long long n = 0, m, ans = 0;
	cin >> n;

	while(n){
		ans++;
		m = n;
		long long tmp = 0;
		while(m){
			tmp = max(tmp, m%10);
			m /= 10;
		}

		n -= tmp;
	}

	cout << ans << "\n";

	return 0;
}