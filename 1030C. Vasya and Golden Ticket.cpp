#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	vector <int> vec;
	vec.push_back(3);
	vec.push_back(5);
	vec.push_back(62);
	vec.push_back(4);
	vec.push_back(0);
	vec.push_back(-1);

	sort(vec.rbegin(), vec.rend());

	for(auto i:vec)
		cout << i << " ";

	return 0;
}