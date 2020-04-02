#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int t;
	cin >> t;
	while(t--){
		int n, m; 
		long long unsigned sum = 0;
		
		cin >> n;

		for(int i=0; i<n; i++){
			cin >> m;
			sum += m;
		}

		cout << (long long unsigned) ceil((double)sum/(double)n) << "\n";
	}

	return 0;	
}