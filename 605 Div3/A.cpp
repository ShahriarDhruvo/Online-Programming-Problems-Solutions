#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n;
	cin >> n;
	while(n--){
		int a[3];
		cin >> a[0] >> a[1] >> a[2];

		sort(a, a+3);

		if(a[0] == a[1] && a[1] == a[2] || (a[0] == a[1] && a[0]+1 == a[2]) || (a[1] == a[2] && a[1]-1 == a[0]))
			cout << 0 << "\n";
		else 
			cout << abs(a[0]-a[1])+abs(a[0]-a[2])+abs(a[1]-a[2])-4 << "\n";
	}
	
	return 0;
}