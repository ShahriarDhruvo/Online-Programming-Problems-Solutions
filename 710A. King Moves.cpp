#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	string s;
	cin >> s;

	int ans = 8;

	if(s[0] == 'a' || s[0] == 'h') ans -= 3;
	if(s[1] == '1' || s[1] == '8') ans -= 3;
	if((s[0] == 'a' || s[0] == 'h') && (s[1] == '1' || s[1] == '8')) ans += 1;

	cout << ans << "\n";
	
	return 0;
}