#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	long long n;
	//cin >> n;
	long long x, sum = 0;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
		sum += arr[i];
	}
	x = arr[0];
	for(int i=1; i<n; i++)
		x ^= arr[i];
	x *= 2;
	cout << sum << " " << x << " " << sum+(x/2) << " " << x/2 << "\n";
	// cout << n << "\n";

	return 0;
}