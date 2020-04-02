#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n;
	cin >> n;
	while(n--){
		string s;
		bool yes = true;
		long long sum = 0;
		cin >> s;
		sort(s.begin(), s.end());

		if(s.size() >= 3){
			if(s[0] == '0'){
				for(int i=1; i<s.size(); i++){
					sum += (int) s[i]-'0';
				}
				if(sum % 3 == 0){
					if(s[1] == '0')
						cout << "red\n";
					else{
						for(int i=1; i<s.size(); i++){
							if(s[i] == '2' || s[i] == '4' || s[i] == '6' || s[i] == '8'){
								cout << "red\n";
								yes = false;
								break;
							}
						}
						if(yes)
							cout << "cyan\n";
					}
				}
				else
					cout << "cyan\n";
			}
			else
				cout << "cyan\n";
		}
		else{	
			if(s[0] == '0' && (s[1] == '6' || s[1] == '0'))
				cout << "red\n";
			else 
				cout << "cyan\n";
		}
	}

	return 0;	
}