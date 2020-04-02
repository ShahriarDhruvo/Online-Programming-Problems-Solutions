#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n;
	cin >> n;
	int arr[n], ara[n];

	for(int i=0; i<n; i++)
		cin >> arr[i];
	for(int i=0; i<n; i++)
		cin >> ara[i];

	int r = 0, b = 0;
	for(int i=0; i<n; i++){
		if(arr[i] == 1 && ara[i] == 0) r++;
		else if(arr[i] == 0 && ara[i] == 1) b++;
	}

	// cout << r << " " << b << "\n";

	if(r == 0) cout << -1 << "\n";
	else if(b>r){
		int sum1 = 0, sum2 = 0;

		for(int i=0; i<n; i++){
			sum1 += arr[i];
			sum2 += ara[i];
		}

		cout << (((sum2-sum1)+1+(r-1))/r)+1 << "\n";

		// int m = (b+1)-(((b+1)/r)*r);

		// // cout << m << "*\n";

		// cout << ((b+1)/r)+m << "\n";
	}
	else if(b == r)
		cout << 2 << "\n";
	else cout << 1 << "\n";
	
	return 0;
}