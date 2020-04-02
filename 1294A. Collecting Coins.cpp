#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int t;
	cin >> t;
	while(t--){
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		// if(a == b && b == c) cout << "YES\n";
		// else{
			int tmp = 0, mx = max(a, max(b, c));
			tmp += mx-a;
			tmp += mx-b;
			tmp += mx-c;

			d -= tmp;
			if(d < 0) cout << "NO\n";
			else if(d % 3 == 0) cout << "YES\n";
			else cout << "NO\n";
		// }
	}
	
	return 0;
}