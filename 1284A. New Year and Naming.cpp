#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n, m;
	cin >> n >> m;
	string strn[n], strm[m];

	for(int i=0; i<n; i++)
		cin >> strn[i];
	for(int i=0; i<m; i++)
		cin >> strm[i];

	int q, tmp;
	cin >> q;
	long arr[q];

	for(int i=0; i<q; i++){
		cin >> tmp;
		arr[i] = tmp-1;
	}

	for(int k=0; k<q; k++){
		int i=arr[k]%n, j=arr[k]%m;
		// cout << i << " " << j << "\n";
		cout << strn[i] << strm[j] << "\n";
	}
	
	return 0;
}