#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)
 
using namespace std;

string to_base(unsigned long long n){
	string bases = "012";
	string result = "";
	while(n > 0){
		result = bases[n%3] + result;
		n /= 3;
	}

	return result;
}
 
int main()
{
	FastIO;
	int t;
	vector<int> vec;
	cin >> t;

	for(int i=1; i<20000; i++){
		string result = to_base(i);
		bool tri = true;
		for(int i=0; i<result.size(); i++){
			if(result[i] == '2'){
				tri = false;
				break;
			}
		}
		if(tri) vec.push_back(i);
	}

	while(t--){
		int n;
		cin >> n;
		for(int i=0; i<vec.size(); i++){
			if(n == vec[i]){
				cout << n << "\n";
				break;
			}
			else if(n > vec[i] && n < vec[i+1]){
				cout << vec[i+1] << "\n";
				break;
			}
		}
	}
 
	return 0;
}