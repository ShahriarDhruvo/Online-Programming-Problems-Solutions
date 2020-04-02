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

		set <char> st;
		for(int i=0; i<s.size(); i++){
			if(s[i] == s[i+1]) i++;
			else
				st.insert(s[i]);
		}

		for(auto i:st)
			cout << i;
		cout << "\n";
	}

	return 0;
}