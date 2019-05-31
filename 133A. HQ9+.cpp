#include <bits/stdc++.h>

using namespace std;

int main()
{
	string p;
	cin >> p;
	int l = 0;
	for (int i=0; i<p.length(); i++)
		if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
			l = 1;
			break;
		}
	if (l == 1) cout << "YES" << endl;
	else cout << "NO" << endl;

    return 0;
}
