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
		int a[n], b[n];
		vector<int> vec;

		for(int i=0; i<n; i++)
			cin >> a[i];
		for(int i=0; i<n; i++)
			cin >> b[i];

		for(int i=0; i<n; i++){
			if(a[i] != b[i]){
				vec.push_back(i);
			}
		}

		if(vec.empty()){
			cout << "YES\n";
			continue;
		}

		int l = vec[0], r = vec[vec.size()-1], k = b[vec[0]] - a[vec[0]];
		bool baal = false;

		// cout << l << " " << r << " " << k << " " << vec.size() << "\n";

		if(k > 0){
			for(int i=l; i<=r; i++){
				a[i] += k;
			}
		}
		else{
			cout << "NO\n";
			continue;
		}

		for(int i=l; i<=r; i++){
			if(a[i] != b[i]){
				cout << "NO\n";
				baal = true;
				break;
			}
		}
		if(!baal) cout << "YES\n";
	}

	return 0;	
}