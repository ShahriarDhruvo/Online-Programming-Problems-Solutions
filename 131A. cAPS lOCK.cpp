#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int l = 0, k = 0;

	if (s[0] >= 'a' && s[0] <= 'z') k = 1;
	else k = 0;
	for (int i=0; i<s.length(); i++)
		if (s[i] >= 'A' && s[i] <= 'Z') l++;
	if (l == s.length() || (k == 1 && l == s.length()-1)) {
		if (k == 1 && l == s.length()-1) s[0] = s[0] - 32;
		if (k == 0 && l == s.length()) s[0] = s[0] + 32;
		for (int i=1; i<s.length(); i++)
			s[i] = s[i] + 32;
	}
	for (int i=0; i<s.length(); i++) 
		cout << s[i];

    return 0;
}
