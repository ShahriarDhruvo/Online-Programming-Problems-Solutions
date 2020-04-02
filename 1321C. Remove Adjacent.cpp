#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n, ans=0;
	char a;
	cin >> n;
	string arr, sarr;

	for(int i=0; i<n; i++){
		cin >> a;
		arr.push_back(a);
		sarr.push_back(arr[i]);
	}

	sort(sarr.begin(), sarr.end(), greater<int>());
	
	for(int i=0; i<sarr.size(); i++){
		for(int j=0; j<arr.size(); j++){
			if(arr[j] == sarr[i]){
				if(j < arr.size()-1 && arr[j]-arr[j+1] == 1){
					ans++;
					arr.erase(j, 1);
					break;
				}
				else if(j > 0 && arr[j]-arr[j-1] == 1){
					ans++;
					arr.erase(j, 1);
					break;
				}
			}
		}
	}

	// cout << arr << "\n";

	cout << ans << "\n";
	
	return 0;
}