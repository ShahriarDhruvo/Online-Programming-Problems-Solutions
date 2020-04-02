#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n;
	string s;
	cin >> n;

	vector <string> vec;

	for(int i=0; i<n; i++){
		cin >> s;
		vec.push_back(s);
	}

	string t1 = vec[0], t2;
	int sum1 = 0, sum2 = 0;

	for(int i=1; i<vec.size(); i++){
		if(vec[i] != t1){
			t2 = vec[i];
			break;
		}
	}

	for(int i=0; i<vec.size(); i++){
		if(vec[i] == t1) sum1++;
		else sum2++;
	}

	if(sum1 > sum2)
		cout << t1 << "\n";
	else cout << t2 << "\n";

	return 0;
}