#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n;
	cin >> n;
	while(n--){
		int m;
		cin >> m;
		int arr[m], swp[m] = {};

		for(int i=0; i<m; i++)
			cin >> arr[i];

		for(int i=m-2; i>=0; i--){
			for(int j=i; j<m-1; j++){
				if(arr[j] > arr[j+1] && swp[j] == 0){
					swap(arr[j], arr[j+1]);
					swp[j] = 1;
				}
			}
		}

		for(int i=0; i<m; i++){
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	
	return 0;
}