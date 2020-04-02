#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	long long s = 0, d = 0, n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++)
		cin >> arr[i];

	bool se = true;
	int k = 0, l = n-1;

	for(int i=0; i<n; i++){
		if(se){
			se = false;
			if(arr[k] > arr[l]){
				s += arr[k];
				arr[k] = 0;
				k++;
			}
			else{
				s += arr[l];
				arr[l] = 0;
				l--;
			}
		}
		else{
			se = true;
			if(arr[k] > arr[l]){
				d += arr[k];
				arr[k] = 0;
				k++;
			}
			else{
				d += arr[l];
				arr[l] = 0;
				l--;
			}
		}
		// cout << s << " " << d << "*\n";
	}

	cout << s << " " << d << "\n";
	
	return 0;
}