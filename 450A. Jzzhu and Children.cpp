#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n, m;
	cin >> n >> m;
	int arr[n];
	for(int i=0; i<n; i++)
		cin >> arr[i];

	vector <int> vec, vec1;

	for(int i=0; i<n; i++){
		if(arr[i] < 0) continue;
		if(arr[i]%m == 0)
			vec.push_back(arr[i]/m);
		else if(arr[i] > m)
			vec.push_back((arr[i]/m)+1);
		else
			vec.push_back(1);
	}

	vec1 = vec;

	sort(vec1.begin(), vec1.end(), greater<int>());

	// for(auto i:vec1)
	// 	cout << i << " ";

	//cout << vec1[0];

	for(int i=vec.size()-1; i>=0; i--){
		if(vec[i] == vec1[0]){
			cout << i+1 << "\n";
			break;
		}
	}

	return 0;
}