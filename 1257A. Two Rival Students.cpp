#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int t;
	cin >> t;
	while(t--){
		int n, x, a, b;
		cin >> n >> x >> a >> b;

		if(a < b) swap(a, b);

		if(n-a > 0){
			if(x >= n - a){
				int temp = a;
				a += n-temp;
				x -= n-temp;
			}
			else{
				a += x;
				x = 0;
			}
		}
		if(b-1 > 0){
			if(x >= b-1){
				int temp = b;
				b -= temp-1;
			}
			else 
				b -= x;
		}
		cout << a-b << "\n";
	}

	return 0;
}
