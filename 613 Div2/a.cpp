#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n;
	cin >> n;
	string s;
	cin >> s;

	int sumL = 0, sumR = 0;

	for(int i=0; i<n; i++){
		if(s[i] == 'L')
			sumL++;
		else
			sumR++;
	}

	cout << sumL + sumR + 1 << "\n";

	return 0;
}