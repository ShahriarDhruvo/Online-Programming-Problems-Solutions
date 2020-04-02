#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int t;
	cin >> t;
	while(t--){
		string p, h;
		cin >> p >> h;
		int n = p.size(), m = h.size();
		
		if(m >= n){
			vector <char> vecp;

			for(int i=0; i<n; i++)
				vecp.push_back(p[i]);

			sort(vecp.begin(), vecp.end());

			bool flag = false;

			for(int i=0; i<=(m-n); i++){
				vector <char> xh;
				for(int j=i; j<i+n; j++)
					xh.push_back(h[j]);

				sort(xh.begin(), xh.end());

				if(xh == vecp){
					flag = true;
					break;
				}
			}
			if(flag)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
		else
			cout << "NO\n";

	}

	return 0;
}