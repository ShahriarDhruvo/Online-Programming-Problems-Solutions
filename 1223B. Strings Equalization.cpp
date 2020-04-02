#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int t;
	cin >> t;
	while(t--){
		string s, t;
		cin >> s >> t;

		if(s == t) cout << "YES\n";
		else{
			int n = s.length();

			set <char> ss;
			set <char> st;
			set <char>::iterator it;
			set <char>::iterator it1;

			for(int i=0; i<n; i++){
				ss.insert(s[i]);
				st.insert(t[i]);
			}

			bool foo = true;

			for(it=ss.begin(); it!=ss.end(); it++){
				for(it1=st.begin(); it1!=st.end(); it1++){
					if(*it == *it1){
						cout << "YES\n";
						foo = false;
						break;
					}
				}
				if(!foo) break;
			}
			if(foo) cout << "NO\n";
		}
	}

	return 0;	
}