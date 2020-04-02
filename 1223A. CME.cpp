#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int q;
	cin >> q;
	while(q--){
		long long n;
		cin >> n;
		if(n == 2) cout << 2 << "\n";
		else if(n%2 == 0) cout << 0 << "\n";
		else cout << 1 << "\n";
	}

	return 0;	
}