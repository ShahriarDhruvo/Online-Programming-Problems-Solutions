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
		int arr[n];
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
	
		int ans = 0, rmin = INT_MAX;

		for(int i=n-1; i>=0; i--){
			if(arr[i] > rmin)
				ans++;
			rmin = min(arr[i], rmin);
		}

		cout << ans << "\n";
	}

	return 0;	
}