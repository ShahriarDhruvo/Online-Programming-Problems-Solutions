#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int t;
	cin >> t;

	while(t--){
		int a, b, diff, ans = 0;
		cin >> a >> b;

		if(a == b) ans = 0;
		else if(b>a){
			diff = b-a;
			if(diff % 2 != 0) ans++;
			else ans += 2;
		}
		else{
			diff = a-b;
			if(diff % 2 == 0) ans++;
			else ans += 2;
		}

		cout << ans << "\n";
	}
	
	return 0;
}