// Unsolved

#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	long long n, opr = 0, m;
	cin >> n;

	long long s = sqrt(n)*10000;

	while(s%10000 == 0){
		n = sqrt(n);
		s = sqrt(n)*10000;
		// cout << "Yo\n";
		opr++;
	}

	m = n;
	//cout << n << "*\n";

	for(int i=2; i<=m; i++){
		s = sqrt(n)*10000;
		if(s%10000 == 0){
			n = sqrt(n);
			opr++;
			//cout << n << "**\n";
			continue;
		}

		long long temp = n*i;
		s = sqrt(temp)*10000;
		if(s%10000 == 0){
			temp = sqrt(temp);
			if(temp < n){
				n = temp;
				opr += 2;
				cout << n << "***\n";
			}
		}	
	}

	cout << n << " " << opr << "\n";

	return 0;
}