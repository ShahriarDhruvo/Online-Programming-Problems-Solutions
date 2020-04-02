#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		char arr[n];
		for(int i=0; i<n; i++)
			cin >> arr[i];
		
		int f1 = -1, l1 = -1;
		for(int i=0; i<n; i++){
			if(arr[i] == '1'){
				f1 = i;
				break;
			}
		}
		int k = 0;
		for(int i=n-1; i>=0; i--){
			if(arr[i] == '1'){
				l1 = k;
				break;
			}
			k++;
		}

		//cout << f1 << " " << l1 << "\n";
		int tem = 0, tem1 = 0;
		if(f1 != -1)
			tem = (n-f1)*2;
		if(l1 != -1)
			tem1 = (n-l1)*2;
		if(l1 == -1 && f1 == -1) tem = n;

		//cout << tem << " " << tem1 << "\n";

		cout << max(tem, tem1) << "\n";
	}

	return 0;
}