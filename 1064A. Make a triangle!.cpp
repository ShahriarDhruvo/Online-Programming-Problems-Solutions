#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr, arr+3);

	if(arr[2] < arr[1]+arr[0])
		cout << 0 << "\n";
	else cout << abs(arr[2]-arr[0]-arr[1])+1 << "\n";

	return 0;	
}