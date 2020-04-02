#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n], ara[n];

		for(int i=0; i<n; i++)
			cin >> arr[i];
		for(int i=0; i<n; i++)
			cin >> ara[i];

		sort(arr, arr+n);
		sort(ara, ara+n);

		for(auto i:arr)
			cout << i << " ";
		cout << "\n";
		for(auto i:ara)
			cout << i << " ";
		cout << "\n";
	}
	
	return 0;
}