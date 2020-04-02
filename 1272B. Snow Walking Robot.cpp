#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;

		int l = 0, r = 0,  u = 0, d = 0;

		for(int i=0; i<s.length(); i++){
			if(s[i] == 'L') l++;
			else if(s[i] == 'R') r++;
			else if(s[i] == 'U') u++;
			else if(s[i] == 'D') d++;
		}

		if(r != l){
			if(r > l)
				r = l;
			else l = r;
		}

		if(u != d){
			if(u > d)
				u = d;
			else d = u;
		}

		vector <char> vec;
		bool yes = true;

		if(u != 0 && r != 0){
			for(int i=0; i<l; i++)
				vec.push_back('L');
			for(int i=0; i<u; i++)
				vec.push_back('U');
			for(int i=0; i<r; i++)
				vec.push_back('R');
			for(int i=0; i<d; i++)
				vec.push_back('D');
		}
		else if(r != 0){
			vec.push_back('L');
			vec.push_back('R');
		}
		else if(u != 0){
			vec.push_back('U');
			vec.push_back('D');
		}

		cout << vec.size() << "\n";

		for(int i=0; i<vec.size(); i++)
			cout << vec[i];
		cout << "\n";
	}

	return 0;	
}