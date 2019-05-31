#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	n++;
	int a = n % 10;
	int b = ((n % 100) - a) / 10;
	int c = ((n % 1000) - (n % 100)) / 100;
	int d = ((n % 10000) - (n % 1000)) / 1000;

	while (1) {
		if (a == b || b == c || c == d || a == c || a == d || b == d) {
			n++;
			a = n % 10;
			b = ((n % 100) - a) / 10;
			c = ((n % 1000) - (n % 100)) / 100;
			d = ((n % 10000) - (n % 1000)) / 1000;
		}
		else break;
	}

	cout << n << endl;

    return 0;
}
