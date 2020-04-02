#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int t;
	cin >> t;
	while(t--){
		string a, b, c;
		cin >> a >> b >> c;
		int k = 0;

		for(int i=0; i<a.size(); i++){
			if(a[i] == b[i] && c[i] != a[i]) break;
			else if(a[i] == c[i] || b[i] == c[i]) k++;
			else break;
		}

		if(k == a.size()) cout << "YES\n";
		else cout << "NO\n";
	}
	
	return 0;
}