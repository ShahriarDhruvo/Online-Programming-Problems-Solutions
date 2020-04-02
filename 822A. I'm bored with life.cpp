#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int a, b;
	cin >> a >> b;
	int n = min(a, b);

	for(int i=n-1; i>=2; i--) n *= i;
		
	cout << n << "\n";
	
	return 0;
}