#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int t;
	cin >> t;
	while(t--){
		long long x, y, a, b;
		cin >> x >> y >> a >> b;
		
		long long i = (y-x)/(a+b);
		if((x+a*i) == (y-b*i)) cout << i << "\n";
		else cout << -1 << "\n";
	}
	
	return 0;
}