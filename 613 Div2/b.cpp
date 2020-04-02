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
		long long arr[n], sum = 0;
		bool flag = true;

		for(int i=0; i<n; i++)
			cin >> arr[i];

		for(int i=0; i<n; i++){
			sum += arr[i];
			if(sum <= 0){
				flag = false;
				break;
			}
		}

		sum = 0;

		if(flag){
			for(int i=n-1; i>=0; i--){
				sum += arr[i];
				if(sum <= 0){
					flag = false;
					break;
				}
			}
		}

		if(flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}