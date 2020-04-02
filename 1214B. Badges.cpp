
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int b, g, n, count = 0;
	cin >> b >> g >> n;

	for(int i=0; i<=b; i++){
		for(int j=0; j<=g; j++){
			if(i+j == n) count++;
			else if(i+j > n) break;
		}
	}

	cout << count << "\n";

	return 0;	
}