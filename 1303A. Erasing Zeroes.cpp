#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int t;
	cin >> t;

	while(t--){
		string s;
		cin >> s;

		vector <int> vec;

		for(int i=0; i<s.size(); i++)
			if(s[i] == '1') vec.push_back(i);

		// for(auto i:vec)
		// 	cout << i << " ";

		// cout << "\n";

		long long sum = 0;
		for(int i=vec.size()-1; i>0; i--){
			// cout << vec[i] << " " << vec[i-1] << "\n";
			sum += vec[i]-vec[i-1]-1;
		}

		cout << sum << "\n";
	}
	
	return 0;
}