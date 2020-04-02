#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n, k;
	cin >> n >> k;
	char arr[n];
	for(int i=0; i<n; i++)
		cin >> arr[i];

	if(n > 1){
		if(arr[0] != '1' && k != 0){
			arr[0] = '1';
			k--;
		}
		for(int i=1; i<n; i++){
			if(k < 1) break;
			if(arr[i] != '0'){
				arr[i] = '0';
				k--;
			}
		}
	}
	else if(k != 0)
		arr[0] = '0';

	for(int i=0; i<n; i++)
		cout << arr[i];
	cout << "\n";

	return 0;
}