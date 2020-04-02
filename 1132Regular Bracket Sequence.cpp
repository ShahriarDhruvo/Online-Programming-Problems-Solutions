#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	long long a, b, c, d;
	cin >> a >> b >> c >> d;

	if(a == 0 && c == 0 && d == 0) cout << "1\n"; 
	else if(c > 0 && a == d && a != 0) cout << "1\n";
	else if(a > 0 && a == d) cout << "1\n";
	else cout << "0\n";
	
	return 0;
}