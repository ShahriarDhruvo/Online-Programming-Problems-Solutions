#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int t;
	cin >> t;
	long long arr[t];

	for(int i=0; i<t; i++)
		cin >> arr[i];

	for(int i=0; i<t; i++){
		long long r = arr[i]/14, temp;
		temp = arr[i]-(r-1)*14;
		if(arr[i] >= 1 && arr[i] <= 14)
			cout << "NO\n";
		else if(temp == 15 || temp == 16 || temp == 17 || temp == 18 || temp == 19 || temp == 20)
			cout << "YES\n";	
		else 
			cout << "NO\n";
	}

	return 0;	
}