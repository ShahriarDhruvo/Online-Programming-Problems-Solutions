#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n;
	cin >> n;
	vector <int> vec;

	for(int i=19; i<10800101; i++){
		long long tmp = i, sum = 0;
		while(tmp){
			sum += tmp%10;
			if(sum > 10) break;
			tmp /= 10;
		}

		if(sum == 10)
			vec.push_back(i);
	}

	cout << vec[n-1] << "\n";
	
	return 0;
}