#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	string s;
	cin >> s;
	int nr = 0, nl = 0;
	for(int i=0; i<s.length(); i++){
		if(s[i] == 'R') nr++;
		else nl++;
	}

	if(nr == nl)
		cout << 0 << "\n";
	else
		cout << max(nr, nl)-min(nr, nl) << "\n";
	
	return 0;
}