#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	string s, t;
	cin >> s;
	t = s;
	reverse(t.begin(), t.end());

	int chg = 0;

	for(int i=0; i<s.size(); i++){
		if(chg > 2) break;
		if(s[i] != t[i]) chg++;
	}

	if(chg == 2) cout << "YES\n";
	else if(chg == 0){
		if(s.size()%2 != 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	else cout << "NO\n";

	return 0;
}