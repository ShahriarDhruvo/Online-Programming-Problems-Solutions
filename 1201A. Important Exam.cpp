#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n, m;
	cin >> n >> m;
	int arr[m];
	char ara[n][m];

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> ara[i][j];
		}
	}
	for(int i=0; i<m; i++)
		cin >> arr[i];

	int cA = 0, cB = 0, cC = 0, cD = 0, cE = 0, res = 0;

	for(int i=0; i<m; i++){

		cA = 0, cB = 0, cC = 0, cD = 0, cE = 0;

		for(int j=0; j<n; j++){
			if(ara[j][i] == 'A') cA++;
			else if(ara[j][i] == 'B') cB++;
			else if(ara[j][i] == 'C') cC++;
			else if(ara[j][i] == 'D') cD++;
			else if(ara[j][i] == 'E') cE++;
		}

		res += arr[i] * max(cA, max(cB, max(cC, max(cD, cE))));
	}

	cout << res << "\n";

	return 0;	
}