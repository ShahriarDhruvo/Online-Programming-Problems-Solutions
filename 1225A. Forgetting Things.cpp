#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int a, b;
	cin >> a >> b;
	if(b-a == 1)
		cout << (a*100+99) << " " << b*100 << "\n";
	else if(a == b)
		cout << (a*100+12) << " " << (b*100+13) << "\n";
	else if(b*10 - a == 1)
		cout << a << " " << b*10 << "\n";
	else
		cout << -1 << "\n";
	
	return 0;
}