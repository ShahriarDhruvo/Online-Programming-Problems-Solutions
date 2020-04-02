#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		reverse(s.begin(), s.end());

		if(s[0] == 'o')
			cout << "FILIPINO\n";
		else if(s[0] == 'u')
			cout << "JAPANESE\n";
		else
			cout << "KOREAN\n";
	}

	return 0;
}