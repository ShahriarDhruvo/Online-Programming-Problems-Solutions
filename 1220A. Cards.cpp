#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n;
	cin >> n;
	char str[n];
	int cn = 0, cz = 0;
	for(int i=0; i<n; i++){
		cin >> str[i];
		if(str[i] == 'n') cn++;
		else if(str[i] == 'z') cz++;
	}
	for(int i=0; i<cn; i++)
		cout << 1 << " ";
	for(int i=0; i<cz; i++)
		cout << 0 << " ";
	cout << "\n";

	return 0;	
}