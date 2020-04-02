#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	long long f1, f2, n;
	cin >> f1 >> f2 >> n;

	vector <long long> f;
	f.push_back(0);
	f.push_back(f1);
	f.push_back(f2);

	for(int i=3; i<=n; i++){
		//f[i].push_back(f[i-1]-f[i-2]);
		//cout << f[i] << "*\n";
	}
	// if(f[n] < 0)
	// 	cout << 1000000007+f[n] << "\n";
	// else cout << f[n]%1000000007 << "\n";

	return 0;
}