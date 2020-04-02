#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	string a, b;
	cin >> a >> b;
	
	if(a != b)
		cout << 1 << "\n";
	else cout << a << "\n";

	return 0;	
}