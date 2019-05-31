#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n+1];
	for (int i=0; i<n; i++) 
		cin >> arr[i];
	int k = 1;
	int count = 1;
	for (int i=0; i<n-1; i++) {
		if (arr[i+1] >= arr[i]) {
			count++;
		}
		else count = 1;
		if (count > k) k = count;
	}

	cout << k << endl;

	return 0;
}