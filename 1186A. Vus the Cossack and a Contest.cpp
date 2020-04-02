#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n, m, k;
	cin >> n >> m >> k;

	if(n <= m && n <= k)
		cout << "YES\n";
	else 
		cout << "NO\n";
	
	return 0;
}