#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int t;
	cin >> t;
	while(t--){
		int n, d;
		cin >> n >> d;
		int arr[n];

		for(int i=0; i<n; i++)
			cin >> arr[i];

		for(int i=1; i<n; i++){
			if(arr[i] == 0) continue;
			if(i*arr[i] <= d){
				arr[0] += arr[i];
				d -= i*arr[i];
			}
			else{
				while(i*arr[i] > d) arr[i]--;
				arr[0] += arr[i];
				break;
			}
		}

		cout << arr[0] << "\n";
	}	
	
	return 0;
}