#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n, a, b, k;
	cin >> n >> a >> b >> k;

	int arr[n];
	for(int i=0; i<n; i++)
		cin >> arr[i];

	long long sumP = a+b, points = 0;
	vector <long long> vec, nvec;

	for(int i=0; i<n; i++){
		if(arr[i]%sumP == 0)
			vec.push_back(b);
		else vec.push_back((arr[i]%sumP)-a);
	}

	// for(auto i:vec)
	// 	cout << i << " ";
	// cout << "\n";

	sort(vec.begin(), vec.end());

	for(auto i:vec){
		if(i <= 0) points++;
		else nvec.push_back(i);
	}

	vec.clear();

	// for(auto i:nvec)
	// 	cout << i << " ";
	// cout << "\n";

	int i=0;
	while(k > 0 && i < nvec.size()){
		k -= ceil(nvec[i]/(float)a);
		// cout << k << "l\n";
		if(k < 0) break;	
		points++;
		i++;
	}

	nvec.clear();

	cout << points << "\n";
	
	return 0;
}