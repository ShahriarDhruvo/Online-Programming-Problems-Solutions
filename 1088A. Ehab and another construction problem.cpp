#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int x;
	bool flag = false;
	cin >> x;

	if(x < 2)
		cout << -1 << "\n";

	for(int i=2; i<=x; i++){
		for(int j=i; j<=x; j++){
			if(i%j == 0 || j%i == 0){
				if(i*j > x){
					flag = true;
					if(i > j)
						cout << i << " " << j << "\n";
					else
						cout << j << " " << i << "\n";
					break;
				}
			}
		}
		if(flag)
			break;
		else cout << -1 << "\n";
	}
	
	return 0;
}