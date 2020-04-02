#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n, k;
	scanf(" %d %d", &n, &k);
	long long arr[n];
	for(int i=0; i<n; i++)
		scanf(" %d", &arr[i]);
	vector <int> vec;
	for(int i=n-2; i>=0; i--)
		vec.push_back(arr[i+1] - arr[i]);
	sort(vec.begin(), vec.end(), greater<int>());

	k--;
	int sum = 0;

	for(int i=0; i<vec.size(); i++){
		if(k > 0) {
			k--;
			continue;
		}
		sum += vec[i];
	}

	printf("%d\n", sum);
	
	return 0;
}
