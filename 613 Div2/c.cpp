#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	long long n, ans;
	cin >> n;

	for(long long i=1; i*i<=n; i++){
		if(n%i == 0 && ((i/__gcd(i, (n/i)))*(n/i)) == n){
			ans = i;
		}
	}

	cout << ans << " " << n/ans << "\n";

	return 0;
}