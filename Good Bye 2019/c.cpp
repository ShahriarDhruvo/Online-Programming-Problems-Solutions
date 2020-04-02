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
		long long x = 0, sum = 0;
		cin >> n;
		int arr[n];
		for(int i=0; i<n; i++){
			cin >> arr[i];
			sum += arr[i];
			x ^= arr[i];
		}

		vector <long long> vec;
		
		if(sum != 2*x){
			if(x == 0)
				vec.push_back(sum);
			else{
				vec.push_back(x);
				vec.push_back(sum+x);
			} 
		}

		cout << vec.size() << "\n";
		for(int i=0; i<vec.size(); i++)
			cout << vec[i] << " ";
		cout << "\n";
	}

	return 0;
}