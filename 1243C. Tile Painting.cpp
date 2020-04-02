// Unsolved T_T
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

long long gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);       
}

int main()
{
	FastIO;
	long long n, m;
	cin >> n;
	m = n;
	
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0){
			m = gcd(m, i);
			m = gcd(m, n/i);
		}
	}

	cout << m << "\n";

	return 0;	
}