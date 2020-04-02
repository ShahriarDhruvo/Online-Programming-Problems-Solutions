#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n;
	cin >> n;
	long long arr[n], tmp[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
		tmp[i] = arr[i];
	}

	sort(tmp, tmp+n);

	long long tar = tmp[0];
	vector <int> vec, vec1;

	for(int i=0; i<n; i++)
		if(arr[i] == tar)
			vec.push_back(i);

	for(int i=vec.size()-1; i>=1; i--)
		vec1.push_back(vec[i]-vec[i-1]);

	sort(vec1.begin(), vec1.end());

	cout << vec1[0] << "\n";

	return 0;
}