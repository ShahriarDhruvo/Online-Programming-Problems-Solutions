#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long arr[n];
		for(int i=0; i<n; i++)
			cin >> arr[i];
		bool flag = true;
		for(int i=1; i<n; i++){
			if(abs(arr[i]-arr[i-1]) >= 2){
				flag = false;
				cout << "YES\n";
				cout << i << " " << i+1 << "\n";
				break; 
			}
		}
		if(flag)
			cout << "NO\n";
	}

	return 0;
}