//Most corner case + fucked up problem of my life..... -_-

#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int m, s;
	cin >> m >> s;
	int tmp = s/9;

	vector <int> max, min;
	int n = 1, q = s;
	while(q >= 10){
		q /= 10;
		n++;
	}

	if((s == 0 && m != 1) || m < n) cout << -1 << " " << -1 << "\n";
	else if(m == 1) cout << s << " " << s << "\n";
	else if(m > 1 && s < 10){
		int l = m;
		max.push_back(s);
		l--;
		for(int i=0; i<l; i++)
			max.push_back(0);
		if(s > 1){
			s--;
			min.push_back(1);
			m -= 2;

			for(int i=0; i<m; i++)
				min.push_back(0);
			min.push_back(s);
		}
		else min = max;

		for(auto i:min)
			cout << i;
		cout << " ";

		for(auto i:max)
			cout << i;
		cout << "\n";
	}
	else{
		int l = m;
		for(int i=0; i<tmp; i++){
			max.push_back(9);
			m--;
		}
		if(m != 0){
			max.push_back(s-(s/9)*9);
			m--;
		}
		for(int i=0; i<m; i++)
			max.push_back(0);

		min = max;
		reverse(min.begin(), min.end());

		if(min[0] == 0){
			for(int i=0; i<min.size(); i++){
				if(min[i] != 0){
					swap(min[i], min[0]);
					break;
				}
			}
		}

		if(min[0] > 1 && min[1] == 0){
			int tmp = min[0]-1;
			min[0] = 1;
			for(int i=min.size()-1; i>=0; i--){
				if(min[i] == 0){
					min[i] = tmp;
					break;
				}
			}
		}

		long long sum1 = 0, sum2 = 0;

		for(auto i:max)
			sum1 += i;
		for(auto i:min)
			sum2 += i;

		if(sum1 != s || sum2 != s || max.size() > l || min.size() > l){
			cout << -1 << " " << -1 << "\n";
			return 0;
		}

		for(auto i:min)
			cout << i;
		cout << " ";

		for(auto i:max)
			cout << i;
		cout << "\n";
	}
	
	return 0;
}