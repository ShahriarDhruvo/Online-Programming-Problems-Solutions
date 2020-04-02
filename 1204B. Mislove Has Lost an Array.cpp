#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n, l, r;
	cin >> n >> l >> r;
	long long pow = 2;
	for(int i=1; i<r-1; i++)
		pow *= 2;

	int min = n-(l-1), max = n-(r-1);

	long long tmp = n-min, tmp2 = 0, tmp3 = 2;

	for(int i=0; i<tmp; i++){
		tmp2 += tmp3;	
		tmp3 *= 2;
	}
	min += tmp2;

	tmp2 = 1;
	tmp3 = 2;

	tmp = n-max;
	if(r > 1) max *= pow;

	for(int i=0; i<tmp-1; i++){
		tmp2 += tmp3;	
		tmp3 *= 2;
	}
	if(tmp != 0) max += tmp2;

	cout << min << " " << max << "\n";

	return 0;
}