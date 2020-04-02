#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n, k;
	cin >> n >> k;
	int arr[n];

	for(int i=0; i<n; i++)
		cin >> arr[i];

	sort(arr, arr+n);

	vector <int> kvec;
	bool yes = true;;

	for(int i=0; i<n; i++){
		yes = true;
		if(arr[i] % k == 0 && i != 0){
			int temp = arr[i]/k, l = 0, r = kvec.size();

			while(r >= l){
				int m = l + (r-l)/2;

				if(kvec[m] == temp){
					yes = false;
					break;
				}
				else if(kvec[m] < temp)
					l = m+1;
				else 
					r = m-1;
			}

			if(yes)
				kvec.push_back(arr[i]);
		}
		else 
			kvec.push_back(arr[i]);
	}

	cout << kvec.size() << "\n";

	return 0;	
}