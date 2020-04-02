#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n, m;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	
	sort(a, a+n);

	cin >> m;
	int b[m];
	for(int i=0; i<m; i++){
		cin >> b[i];
	}

	sort(b, b+m);
	
	cout << a[n-1] << " " << b[m-1] << "\n";
	
	return 0;
}