#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n, k;
	cin >> n >> k;
	int arr[n];
	int pos = 0;

	for(int i=0; i<n; i++)
		cin >> arr[i];

	sort(arr, arr+n);

	vector<int> vec;

	for(int j=0; j<n; j++){
		if(arr[j] != 0){
			cout << arr[j] << "\n";
			pos = j;
			k--;
			break;
		}
	}

	if(pos == 0)
		pos = 1;

	for(int i=pos; i<n; i++){
		vec.push_back(arr[i] - arr[i-1]);
	}

	for(int i=0; i<vec.size(); i++){
		if(k == 0) break;
		if(vec[i] == 0) continue;
		cout << vec[i] << "\n";
		k--;
	}

	if(k > 0){
		while(k != 0){
			cout << 0 << "\n";
			k--;
		}
	}
	
	return 0;
}