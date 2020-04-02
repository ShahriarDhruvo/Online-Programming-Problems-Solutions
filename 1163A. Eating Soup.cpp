#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n, m;
	cin >> n >> m;
	if(n == m)
		cout << 0 << "\n";
	else if(m < 2)
		cout << 1 << "\n";
	else{
		if(n-m > m)
			cout << m << "\n";
		else 
			cout << n-m << "\n";
	}
	
	return 0;
}