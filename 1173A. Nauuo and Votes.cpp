#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int x, y, z;
	cin >> x >> y >> z;
	if(x == y && z==0)
		cout << "0" << "\n";
	else if(x > y+z)
		cout << "+" << "\n";
	else if(y > x+z)
		cout << "-" << "\n";
	else
		cout << "?" << "\n";

	return 0;	
}