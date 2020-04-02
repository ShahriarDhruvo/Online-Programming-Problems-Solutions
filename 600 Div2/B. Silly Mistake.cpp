#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n;
	cin >> n;
	int a[n], b[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
		b[i] = a[i];
	}

	sort(b, b+n);

	if(a[0] < 0 || n < 2){
		cout << -1 << "\n";
	}
	else{
		for(int i=0; i<n; i++){
			a[i]
		}
	}

	return 0;	
}