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
		cin >> n >> m;
		int a[n], sa[n];
		set <int> s;

		for(int i=0; i<n; i++){
			cin >> a[i];
			sa[i] = a[i];
		}

		sort(sa, sa+n);

		for(int i=0; i<m; i++){
			int tmp;
			cin >> tmp;
			s.insert(tmp);
		}

		set <int> is;

		for(int i=1; i<=n; i++){
			int tmp = i;
			bool milse = false;
			for(auto j:s){
				if(tmp == j){
					milse = true;
					break;
				}
			}
			if(!milse) is.insert(i);
		}

		// for(auto i:is)
		// 	cout << i << " ";
		// cout << "\n";

		bool milse = true;

		int k = 0;

		for(auto i:is){
			int count = 0;
			for(int j=k; j<i; j++){
				for(int h=k; h<i; h++){
					if(a[j] == sa[h]){
						count++;
						break;
					}
				}
			}		
			if(count != i-k){
				milse = false;
				break;
			}
			k = i;
		}

		if(milse) cout << "YES\n";
		else cout << "NO\n";
	}
	
	return 0;
}