#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int t;
	scanf(" %d", &t);
	while(t--){
		long long a, b, n, s;

		scanf(" %lld %lld %lld %lld", &a, &b, &n, &s);

		if(n == s) printf("YES\n");
		else if(n > s){
			if(s-b <= 0) printf("YES\n");
			else printf("NO\n");
		}
		else{
			if(a*n < s){
				s -= a*n;
				if(s-b <= 0) printf("YES\n");
				else printf("NO\n");
			}
			else if(a*n == s) printf("YES\n");
			else{
				int m = s/n;
				if(m <= a && s%n <= b)
					printf("YES\n");
				else printf("NO\n");
			}
		}
	}
	
	return 0;
}
	