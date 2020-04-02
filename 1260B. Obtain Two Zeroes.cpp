#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int t;
	cin >> t;
	while(t--){
		long long a, b, x, y;
		cin >> a >> b;
		x = max(a, b), y = min(a, b);

		if((x+y)%3 == 0 && y*2 >= x)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}