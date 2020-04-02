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
		long long x, y;
		vector <long long> vecx, vecy;

		cin >> n;
		for(int i=0; i<n; i++){
			cin >> x >> y;
			vecx.push_back(x);
			vecy.push_back(y);
		} 

		sort(vecx.begin(), vecx.end());
		sort(vecy.begin(), vecy.end());

		if(vecx[vecx.size()-1]-vecy[0] < 0)
			cout << 0 << "\n";
		else
			cout << vecx[vecx.size()-1]-vecy[0] << "\n";
	}

	return 0;
}