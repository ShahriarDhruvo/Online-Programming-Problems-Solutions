#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int t;
	cin >> t;
	while(t--){
		int h, m;
		cin >> h >> m;
		cout << abs(23-h)*60+abs(60-m) << "\n";
	}

	return 0;
}