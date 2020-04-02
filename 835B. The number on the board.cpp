#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	long long k, sum = 0;
	cin >> k;
	string s;
	cin >> s;
	for(int i=0; i<s.length(); i++)
		sum += (int)s[i]-'0';

	//cout << sum << "\n";

	if(sum >= k)
		cout << 0 << "\n";
	else{
		long long ans, m;
		k -= sum;
		if(k%9 == 0)
			ans = k/9;
		else
			ans = (k/9)+1;

		sort(s.begin(), s.end());
		//cout << s <<"\n";

		//cout << ans << "\n";

		sum = 0;
		for(int i=0; i<ans; i++)
			sum += (int)s[i]-'0';
		//cout << sum <<"\n";

		m = (ans*9 - sum);
		
		//cout << m << "\n";

		while(m < k){
			int inc = 0;

			if((k-m)%9 == 0)
				inc += (k-m)/9;
			else
				inc += ((k-m)/9)+1;

			for(int i=ans; i<ans+inc; i++)
				sum += (int)s[i]-'0';

			ans += inc;
			m = (ans*9 - sum);

			//cout << m << "*\n";
		}

		cout << ans << "\n";
	}

	return 0;
}