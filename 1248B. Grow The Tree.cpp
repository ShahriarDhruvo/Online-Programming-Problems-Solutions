#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	long long n, x = 0, y = 0;
	cin >> n;
	int arr[n];

	for(int i=0; i<n; i++)
		cin >> arr[i];

	sort(arr, arr+n, greater<int>());

	for(int i=0; i<ceil(n/2.0); i++) x += arr[i];
	for(int i=ceil(n/2.0); i<n; i++) y += arr[i];

	cout << x*x + y*y << "\n";
	
	return 0;
}