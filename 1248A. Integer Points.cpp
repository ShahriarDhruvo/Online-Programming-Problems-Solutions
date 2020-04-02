#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int t;
	cin >> t;
	while(t--){
		long long n, m, e1 = 0, e2 = 0, o1 = 0, o2 = 0;
		cin >> n;
		long long dls[n];
		for(int i=0; i<n; i++){
			cin >> dls[i];
			if(dls[i] % 2 == 0) e1++;
			else o1++;
		}
		cin >> m;
		long long jls[m];
		for(int i=0; i<m; i++){
			cin >> jls[i];
			if(jls[i] % 2 == 0) e2++;
			else o2++;
		}

		cout << e1*e2 + o1*o2 << "\n";
	}
	
	return 0;
}
