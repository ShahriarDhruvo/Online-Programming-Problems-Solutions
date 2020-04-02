#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	long long n;
	cin >> n;

	if(n%10 == 0)
		cout << n << "\n";
	else{
		if(n%10 > 5)
			cout << n+(10-(n%10)) << "\n";
		else
			cout << n-(n%10) << "\n";
	}
	
	return 0;
}