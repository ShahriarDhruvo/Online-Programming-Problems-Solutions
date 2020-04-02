#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		int arr[n];
		for(int i=0; i<n; i++)
			cin >> arr[i];

		sort(arr, arr+n);
		int count = 0;

		for(int i=0; i<n-1; i++){
			if(arr[i+1] - arr[i] == 1){
				count++;
				break;
			}
		}

		if(count == 0) cout << 1 << "\n";
		else cout << 2 << "\n";
	}

	return 0;	
}