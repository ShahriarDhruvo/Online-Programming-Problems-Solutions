#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int a, b, c, d;
	
	cin >> a >> b >> c >> d;
	
	if(a+b == c+d)
		cout << "YES\n";
	else if(a+c == b+d)
		cout << "YES\n";
	else if(b+c == a+d)
		cout << "YES\n";
	else if(d+b+c == a)
		cout << "YES\n";
	else if(a+b+c == d)
		cout << "YES\n";
	else if(a+c+d == b)
		cout << "YES\n";
	else if(a+b+d == c)
		cout << "YES\n";
	else cout << "NO\n";

	return 0;	
}