#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n;
	cin >> n;
	vector<int> vec;
	for(int i=1; i<=sqrt(n); i++){
		if(n%i == 0){
			vec.push_back(2*(i+n/i));
		}
	}

	sort(vec.begin(), vec.end());

	cout << vec[0] << "\n";

	return 0;	
}