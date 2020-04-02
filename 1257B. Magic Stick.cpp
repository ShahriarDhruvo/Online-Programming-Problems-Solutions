#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int t;
	cin >> t;
	while(t--){
		long long x, y;
		bool hoise = false;
		cin >> x >> y;
		//cout << x << " " << y << "\n";
		if(x == y) cout << "YES\n";
		else{
			if(y > x){
				if(x == 1 || y > 3 && (x <= 2 || x <= 3)) cout << "NO\n";
				else cout << "YES\n";
			}
			else cout << "YES\n";
		}
	}
	
	return 0;
}
