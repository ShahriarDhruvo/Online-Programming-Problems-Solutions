#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	long long n;
	cin >> n;

	set <int> sete;
	sete.insert(n);
	n++;

	while(n != 1){
		if(n%10 == 0){
			while(n%10 == 0){
				n /= 10;
			}
			sete.insert(n);
		}
		else{
			sete.insert(n);
			n++;
		}
	}

	for(int i=1; i<10; i++)
		sete.insert(i);

	cout << sete.size() << "\n";

	return 0;	
}