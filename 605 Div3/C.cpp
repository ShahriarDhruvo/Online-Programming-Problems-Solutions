#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n, k;
	long long sum = 0, count = 0;
	cin >> n >> k;
	string s;
	cin >> s;

	map <char, int> m;

	for(char i='a'; i<='z'; i++)
		m[i] = 0;

	char x;

	for(int i=0; i<k; i++){
		cin >> x;
		m[x] = 1;
	}

	for(int i=0; i<=n; i++){
		if(m[s[i]] == 1)
			count++;
		else if(m[s[i]] != 1){
			sum += (count*(count+1))/2;
			count = 0;
		}
	}

	cout << sum << "\n";

	return 0;
}
