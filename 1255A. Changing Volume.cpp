#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int t;
	cin >> t;
	while(t--){
		long long a, b, d, count = 0;
		cin >> a >> b;

		if(a == b)
			cout << 0 << "\n";
		else{
			d = abs(a-b);

			if(d >= 5){
				count += d/5;
				d %= 5;
			}
			if(d >= 2){
				count += d/2;
				d %= 2;
			}

			count += d;

			cout << count << "\n";
		}
	}
	
	return 0;
}