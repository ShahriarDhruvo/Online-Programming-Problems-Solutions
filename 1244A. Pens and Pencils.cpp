#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int t;
	cin >> t;
	while(t--){
		double a, b, c, d, k;
		cin >> a >> b >> c >> d >> k;
		int x = ceil(a/c), y = ceil(b/d);
		if(x + y <= k) cout << x << " " << y << "\n";
		else cout << -1 << "\n";
	}

	return 0;	
}