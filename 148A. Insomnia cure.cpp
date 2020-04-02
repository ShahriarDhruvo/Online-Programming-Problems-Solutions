#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int arr[6], kin[6], count = 0;

	for(int i=0; i<5; i++){
		cin >> arr[i];
		kin[i] = arr[i];
	}

	sort(kin, kin+4);

	if(kin[0] == 1)
		cout << arr[4] << "\n";
	else{
		for(int i=2; i<=arr[4]; i++){
			for(int j=0; j<4; j++){
				if(i%arr[j] == 0){
					count++;
					break;
				}
			}
		}
		cout << count << "\n";
	}	
	
	return 0;
}