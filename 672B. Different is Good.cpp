#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n, count = 0;
	cin >> n;
	char s[n];

	for(int i=0; i<n; i++)
		cin >> s[i];

	sort(s, s+n);

	for(int i=1; i<n; i++){
		if(s[i] == s[i-1])
			count++;
	}

	if(count >= 26 || n > 26)
		count = -1;

	cout << count << "\n";
	
	return 0;
}