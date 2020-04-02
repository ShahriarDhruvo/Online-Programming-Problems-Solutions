#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int t;
	cin >> t;
	while(t--){
		int arr[3], ans;
		cin >> arr[0] >> arr[1] >> arr[2];
		sort(arr, arr+3);

		if(arr[0] == 1)
			ans = 1+min(arr[2]-1, arr[1]);
		else if(arr[2]-arr[0] >= arr[1])
			ans = arr[0]+arr[1];
		else 
			ans = arr[0]+((arr[2]+arr[1]-arr[0])/2.0);

		cout << ans << "\n";
	}

	return 0;
}