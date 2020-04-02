#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n;
	cin >> n;
	char str[n];
	int arr[10] = {}, temp;

	for(int i=0; i<n; i++)
		cin >> str[i];

	for(int j=0; j<n; j++){
		if(str[j] == 'L'){
			for(int i=0; i<10; i++){
				if(arr[i] == 0){
					arr[i] = 1;
					break;
				}
			}
		}
		else if(str[j] == 'R'){
			for(int i=9; i>=0; i--){
				if(arr[i] == 0){
					arr[i] = 1;
					break;
				}
			}
		}
		else{
			temp = str[j] - '0';
			arr[temp] = 0;
		}
	}

	for(int i=0; i<10; i++)
		cout << arr[i];
	cout << "\n";
	
	return 0;
}